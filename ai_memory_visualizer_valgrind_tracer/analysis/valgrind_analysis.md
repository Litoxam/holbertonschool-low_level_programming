# Valgrind Memory Analysis Report

## 1. aliasing_example.c: Use-After-Free

### Valgrind Errors
* **Invalid read of size 4** at `printf`
* **Invalid write of size 4** at `b[3] = 1234`
* **Address is inside a block of size 20 free'd**

### Memory Misuse Analysis
This is a **Use-after-free** error. 
* **The Object**: An array of 5 ints on the Heap.
* **The Cause**: `free(a)` was called too early. 
* **The Result**: `b` is an alias of `a`. It still points to the old address. Reading or writing via `b` after the `free` is illegal. The memory lifetime is over.

### AI Critical Review
**AI Thought**: The program will always crash (Segfault) on the first invalid read.
**My Correction**: This is not certain. In C, a Use-after-free often "works" silently for a while. It's a dangerous **Undefined Behavior**. Valgrind catches it even if the program doesn't crash immediately.

---

## 2. crash_example.c: NULL Pointer Dereference

### Valgrind Errors
* **Invalid write of size 4**
* **Address 0x0 is not stack'd, malloc'd or free'd**
* **Process terminating with SIGSEGV**

### Memory Misuse Analysis
This is a **NULL pointer dereference**.
* **The Object**: None (Address `0x0`).
* **The Cause**: `n = 0` makes the function return `NULL`.
* **The Result**: The code tries to write `42` to address `0`. Since address `0` is forbidden, the OS kills the process.

### AI Critical Review
**AI Thought**: This is a memory leak because the pointer was lost.
**My Correction**: Wrong. There is **no leak**. `malloc` was never called because of the `if (n <= 0)` check. It's just a crash due to a missing NULL check in `main`.

---

## 3. heap_example.c: Lost Ownership (Leak)

### Valgrind Errors
* **40 bytes definitely lost** (the struct)
* **6 bytes definitely lost** (the string "Alice")

### Memory Misuse Analysis
This is a **Memory Leak**.
* **The Object**: The `name` string inside the `Person` struct.
* **The Cause**: `person_free_partial` only frees the struct itself.
* **The Result**: The pointer to the name is destroyed. The string stays on the Heap forever. We lost "Ownership" of that memory.

### AI Critical Review
**AI Thought**: `free(alice)` automatically frees everything inside the structure.
**My Correction**: This is false. In C, `free` is not recursive. You must manually free every pointer *inside* a struct before freeing the struct itself. 

---