# 🖥️ C-Session Store

A robust, memory-safe **Session Management System** implemented in C using a dynamic **Singly Linked List** architecture.

## 📌 Overview
This project manages a collection of user sessions. Each session contains a unique string ID, a numeric UID, and a dynamic data buffer. The system is designed to handle real-time commands while maintaining strict memory integrity.

### Key Components
* **`session.c`**: Manages individual session lifecycles (creation, data resizing, and destruction).
* **`store.c`**: Implements the linked list logic (insertion, lookup, deletion, and full cleanup).
* **`main.c`**: A command-line interface (CLI) for interacting with the store.



## 🛡️ Reliability & Memory Safety
The core focus of this implementation is **defensive programming**:
* **Deep Copying**: Uses `strdup` to ensure sessions own their identifiers, preventing corruption from external buffer changes.
* **Safe Resizing**: Implements `realloc` with temporary pointers to prevent memory leaks or data loss during allocation failures.
* **Ownership Rules**: The `store` assumes full responsibility for any session passed to it. If an insertion fails (e.g., duplicate ID), the session is automatically destroyed to prevent "orphaned" memory.
* **Leak-Free**: Verified under **Valgrind** to ensure zero memory leaks, even in complex failure paths.



## 🕹️ Supported Commands
| Command | Action |
| :--- | :--- |
| `ADD <id> <uid> <data>` | Create and insert a new unique session. |
| `GET <id>` | Retrieve and display session metadata. |
| `SET <id> <data>` | Update an existing session's data (resizes memory). |
| `DEL <id>` | Remove and destroy a specific session. |
| `CLEAR` | Wipe the entire store and reset to an empty state. |

## 🚀 Getting Started
1. **Compile**:
   ```bash
   gcc -Wall -Wextra -Werror *.c -o session_store