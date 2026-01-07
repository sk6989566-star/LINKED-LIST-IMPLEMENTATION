# LINKED-LIST-IMPLEMENTATION
# Singly Linked List in C

This project demonstrates a **menu-driven Singly Linked List implementation in C**. It allows users to **insert**, **delete**, and **display** nodes dynamically using pointers and dynamic memory allocation.

---

##  Features

* Insert a node at the end of the list
* Delete a node by value
* Display all elements in the linked list
* Uses dynamic memory allocation (`malloc` & `free`)
* Simple menu-driven program (easy for beginners)

---

##  Concept Used

* Structures in C
* Pointers
* Dynamic Memory Allocation
* Linked List operations
* Looping and conditional statements

---

##  Operations Explained

### 1️ Insert

* Creates a new node
* Accepts data from the user
* Adds the node at the end of the list

### 2️ Delete

* Deletes a node based on the value entered
* Handles:

  * Empty list
  * Deleting the first node
  * Deleting a middle or last node
  * Value not found case

### 3️ Display

* Prints all elements of the linked list in order
* Format: `data -> data -> NULL`

---

## ▶️ How to Run

1. Save the program as `linkedlist.c`
2. Compile the program:

   ```bash
   gcc linkedlist.c -o linkedlist
   ```
3. Run the executable:

   ```bash
   ./linkedlist
   ```

---

##  Sample Menu Output

```
1.Insert
2.Delete
3.Display
4.Exit
select your choice(no):
```

---

## Example Output

```
Enter value: 10
Enter value: 20
10 -> 20 -> NULL
```

---

##  Learning Outcome

By using this program, you will understand:

* How linked lists work internally
* How memory is allocated and freed
* How to manipulate nodes using pointers

---

## Author

**Atchaya Sivakumar**

---

##  License

This project is for **educational purposes only**.
