# libft - My First Project at School 42

This project is my first assignment at **School 42**, where I recreated several functions from the standard C library (`libc`) from scratch. The goal was to deepen my understanding of C programming and computer science concepts like memory management, pointers, static/dynamic libraries, and more. Below is a summary of what I learned and key concepts that anyone working on this project should grasp.

## Table of Contents
1. [Makefile & Compilation Steps](#makefile--compilation-steps)
2. [Static vs Dynamic Libraries](#static-vs-dynamic-libraries)
3. [String Literals vs Array of Strings](#string-literals-vs-array-of-strings)
4. [Keywords: `static`, `extern`, `const`](#keywords-static-extern-const)
5. [Pointers: Usage and Meaning](#pointers-usage-and-meaning)
6. [Memory Allocation & Management](#memory-allocation--management)
7. [Linked Lists & Basic Data Structures](#linked-lists--basic-data-structures)
8. [File Handling](#file-handling)

---

## Makefile & Compilation Steps

A **Makefile** is a tool used to automate the process of building and compiling programs. In this project, I created a `Makefile` to manage compilation efficiently. It defines rules for compiling individual files and linking them into a final executable or static library.

### Key Concepts:
- **`make` command** automates the process of compiling code.
- **Makefile rules**: Define how to compile files, link them, and clean up build files.
- **Dependencies**: Manage file relationships and ensure only modified files are recompiled.

#### Resources:
- [GNU Make Manual](https://www.gnu.org/software/make/manual/make.html)

## Static vs Dynamic Libraries

This project required creating both **static** and **dynamic libraries**. The main difference between them lies in how they are linked to the final program.

### Static Library:
- Compiled into the program at compile-time.
- Larger executable size.
- Does not require the library file to be present at runtime.

### Dynamic Library:
- Linked to the program at runtime.
- Smaller executable size.
- Requires the `.so` (shared object) file to be present at runtime.

#### Resources:
- [Static and Dynamic Libraries](https://www.tldp.org/HOWTO/Program-Library-HOWTO/static-and-shared-libraries.html)

## String Literals vs Array of Strings

Understanding the difference between **string literals** and an **array of strings** is crucial to avoid **segmentation faults**.

- **String literals** are constant and stored in read-only memory.
- **Array of strings** is mutable, and each element can be changed or reassigned.

### Common Pitfall: 
- Modifying string literals can result in undefined behavior.

#### Resources:
- [String Literals in C](https://www.geeksforgeeks.org/string-literal-in-c/)

## Keywords: `static`, `extern`, `const`

### `static`:
- Limits the scope of a variable or function to the file it's declared in.

### `extern`:
- Declares a variable or function defined elsewhere, usually in another file.

### `const`:
- Defines a constant value that cannot be modified after initialization.

#### Resources:
- [C Keywords](https://www.tutorialspoint.com/cprogramming/c_keywords.htm)

## Pointers: Usage and Meaning

Pointers are variables that store memory addresses. Understanding pointers is essential in C programming for efficient memory use and manipulation.

### Key Concepts:
- **Dereferencing**: Accessing the value at the memory address stored in a pointer.
- **Memory Address**: The location of a variable in memory.
- **Pointer Arithmetic**: Manipulating memory addresses directly.

#### Resources:
- [C Pointers Tutorial](https://www.learn-c.org/en/Pointers_and_Arrays)

## Memory Allocation & Management

Memory management is crucial to avoid memory leaks and segmentation faults. I worked with **dynamic memory allocation** functions like `malloc()`, `calloc()`, and `free()`.

### Key Concepts:
- **malloc()**: Allocates a block of memory.
- **free()**: Deallocates memory.
- **Segmentation Fault**: Occurs when accessing memory incorrectly (e.g., accessing freed memory).

#### Resources:
- [Dynamic Memory Allocation in C](https://www.geeksforgeeks.org/dynamic-memory-allocation-in-c-using-malloc-calloc-free-and-realloc/)

## Linked Lists & Basic Data Structures

During the project, I implemented a basic **linked list**. This data structure allows efficient insertion and deletion of elements without needing contiguous memory locations.

### Key Concepts:
- **Node**: Each element in a linked list, containing data and a pointer to the next node.
- **Insertion/Deletion**: Inserting or deleting elements in the list involves manipulating pointers.

#### Resources:
- [Linked Lists in C](https://www.geeksforgeeks.org/data-structures/linked-list/)

## File Handling

In this project, I also worked with **file handling** in C, which is a fundamental aspect of interacting with external files.

### Key Concepts:
- **Opening files**: Using functions like `open()`, `fopen()` to access files.
- **Reading/Writing to files**: Using `read()`, `write()`, or `fputs()` to interact with file content.
- **Closing files**: Using `close()` or `fclose()` to properly close a file after use.
- **Error handling**: Checking the return values from file handling functions to ensure no errors occur.

Handling files correctly helps avoid issues like memory leaks or unclosed file descriptors, which could lead to system resource exhaustion.

#### Resources:
- [File Handling in C](https://www.tutorialspoint.com/cprogramming/c_file_io.htm)

---

## Conclusion

The **libft** project at School 42 has been an excellent opportunity to dive deep into low-level programming concepts in C. By recreating common `libc` functions from scratch, I gained valuable insights into memory management, pointers, libraries, file handling, and more. These fundamental skills are essential for any aspiring programmer.

---

### How to Compile and Use the Project

1. Clone this repository:  
```bash
git clone https://github.com/your-username/libft.git
cd libft
