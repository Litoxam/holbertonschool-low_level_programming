# Doubly Linked Lists in C

## Description
This project focuses on understanding and implementing **doubly linked lists** in C.

A doubly linked list is a data structure where each node contains:
- a value
- a pointer to the previous node
- a pointer to the next node

---

## Data Structure
```c
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;