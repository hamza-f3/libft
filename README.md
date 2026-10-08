*This project has been created as part of the 42 curriculum by hhadier.*

# Libft - Your Custom C Library

## Description
The **Libft** project is the foundational milestone of the 42 core curriculum. The goal of this project is to recreate a custom C standard library from scratch, providing a robust, Norminette-compliant toolkit that will be compiled and utilized in almost all future C projects in the curriculum. 

By rewriting standard `libc` functions alongside a custom set of string, memory, and linked-list utility functions, this project enforces a deep, mechanical understanding of dynamic memory allocation, pointer arithmetic, data structures, and edge-case handling. 

## Feature List (Implemented Functions)

The library is divided into three main sections:

### 1. Core `libc` Functions
Re-implementations of standard C library functions, matching their original `man` page behaviors.
*   **Character classification & manipulation:** `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`
*   **String manipulation:** `ft_strlen`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strlcpy`, `ft_strlcat`
*   **Memory manipulation:** `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`
*   **Parsing & Allocation:** `ft_atoi`, `ft_calloc`, `ft_strdup`

### 2. Additional Utility Functions
Functions that are either not in the standard `libc`, or are present in a different form.
*   **String manipulation:** `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_strmapi`, `ft_striteri`
*   **Conversion:** `ft_itoa`
*   **File Descriptor / I/O:** `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

### 3. Bonus Linked List Functions (`t_list`)
A complete suite of utility functions to create, iterate, modify, and free linked lists.
*   `ft_lstnew`: Creates a new list node.
*   `ft_lstadd_front` / `ft_lstadd_back`: Adds a node to the beginning or end.
*   `ft_lstsize`: Counts the number of nodes (returns `unsigned int`).
*   `ft_lstlast`: Returns the last node of the list.
*   `ft_lstdelone` / `ft_lstclear`: Frees one node, or the entire list safely.
*   `ft_lstiter`: Applies a function to the content of all nodes.
*   `ft_lstmap`: Iterates and applies a function to create a brand-new mapped list.

## Instructions

This project compiles into a static library archive (`libft.a`) using the provided `Makefile`.

### Compilation
Run the following commands at the root of the repository:
*   `make`: Compiles the core mandatory functions and builds the `libft.a` archive.
*   `make bonus`: Compiles the bonus linked-list functions and appends them to the archive.
*   `make clean`: Removes all compiled `.o` object files.
*   `make fclean`: Removes the object files and the `libft.a` executable.
*   `make re`: Performs a full recompilation (`fclean` followed by `make`).

### Installation & Execution
To use this library in an external 42 project, place the `libft` folder inside your project directory.

1. Include the header in your C source files:
```c
#include "libft/libft.h"