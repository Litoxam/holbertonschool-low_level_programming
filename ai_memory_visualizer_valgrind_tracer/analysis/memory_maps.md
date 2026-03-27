# My Memory Analysis Report

## 1. aliasing_example.c (Pointers and Sharing)

### What happens after `b = a;`
* **Stack**: 
    * I have two variables, `a` and `b`. 
    * Since I wrote `b = a`, both variables now hold the exact same adress (for example, `0x5555...`).
* **Heap**: 
    * There is one box of 20 bytes in the memory. 
    * Both `a` and `b` are pointing to this same box. This is called **Aliasing**.
* **Lifetime**: `a` and `b` stay alive as long as the `main` function is running.

### What happens after `free(a);`
* **Stack**: 
    * Even after `free(a)`, the variables `a` and `b` still have the old address inside them. They are now "Dangling Pointers" (they point to a box that doesn't belong to them anymore).
* **Heap**: 
    * The box at `0x5555...` is now "Free". I am not allowed to touch it.
* **The Error**: 
    * When the code tries to read `b[2]`, it's a "Use-after-free" error. It's trying to read a box that I already freed.

### AI Hypothesis
The AI said that after `b = a;`, a new copy of the array is created in the memory so that `a` and `b` are independent. It also said that `free(a)` sets the pointer `a` to `NULL`.

### My Correction
**Both are wrong.** * **First**, `b = a` only copies the address (the pointer), not the data. This is **Aliasing**: they both point to the same box on the Heap. If I change `b[0]`, `a[0]` changes too.
* **Second**, `free(a)` only cleans the box on the Heap. On the Stack, `a` still holds the old address. It becomes a **Dangling Pointer**. This is why the program doesn't crash immediately but causes an "Invalid Read" in Valgrind.

---

## 2. crash_example.c (The NULL Crash)

### What happens when `n = 0`
* **Stack**: 
    * `n` is 0, so the function `allocate_numbers` returns `NULL`.
    * My variable `nums` is now equal to `NULL` (it points to address `0`).
* **Heap**: 
    * **Nothing**. No memory was ever created because the code stopped before the `malloc`.
* **Why it crashes**: 
    * At the line `nums[0] = 42;`, I'm telling the computer: "Go to address 0 and write 42". 
    * Address 0 is forbidden territory. The computer says "No" and shuts down the program with a **Segmentation Fault**.

### AI Hypothesis
The AI suggested that the program crashes because `malloc` failed due to a lack of memory (RAM) on the computer.

### My Correction
**This is incomplete.** The crash doesn't happen because the computer is out of RAM. 
* It crashes because `n = 0` is passed to the function. Inside `allocate_numbers`, there is a check `if (n <= 0)` that returns `NULL` before even trying to call `malloc`.
* The real error is in `main`: it doesn't check if `nums` is `NULL` before doing `nums[0] = 42`. Accessing address `0` is what triggers the **Segmentation Fault**.

---

## 3. stack_example.c (Function Levels)

### What happens during recursion
* **Stack**: 
    * Every time `walk_stack` calls itself, it creates a new "Layer" (a Stack Frame) on top of the previous one.
    * Each layer has its own version of the variable `marker`. Even if they have the same name, they are at different addresses in the memory.
* **Lifetime**: 
    * When a function finishes, its layer is deleted from the Stack. The memory is cleaned up automatically. This is different from the Heap where I have to use `free()`.

### AI Hypothesis
The AI explained that all variables named `marker` in the different recursive calls share the same memory space to save room on the stack.

### My Correction
**This is incorrect.** * Every time `walk_stack` calls itself, a new **Stack Frame** (a private layer) is created. 
* Each layer has its own `marker` variable with its own address. They are totally separate.
* I verified this by looking at the `%p` print outputs: the addresses for `&marker` are all different. They only disappear when the function returns (end of **Lifetime**).

---

