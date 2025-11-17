libft

libft is the first project in the 42 curriculum. The goal is to recreate a basic C library from scratch — a collection of essential standard C functions along with additional utility functions that will be reused in future projects.
By completing this project, you gain a deeper understanding of memory management, string manipulation, and low-level programming concepts.

📌 Project Overview

The purpose of libft is to implement your own versions of common standard library functions such as:

Character checks (ft_isalpha, ft_isdigit, etc.)

String manipulation (ft_strlen, ft_strlcpy, ft_strlcat, etc.)

Memory handling (ft_memset, ft_memcpy, ft_calloc, etc.)

Conversions (ft_atoi, ft_tolower, etc.)

You will then expand your library with additional functions such as:

Linked list utilities (t_list, ft_lstnew, ft_lstadd_front, etc.)

Advanced helpers commonly used across 42 projects

This project builds the foundation for upcoming assignments like get_next_line, ft_printf, and minishell.

📁 Repository Structure
libft/
│
├── Makefile
├── libft.h
├── ft_*.c
└── README.md


Makefile — compiles the library into libft.a

libft.h — contains all function prototypes and required includes

ft_*.c — each C file contains one function implementation

libft.a — the final compiled static library (after running make)

🔧 How to Compile

To build your library:

make


To remove object files:

make clean


To remove object files + library:

make fclean


To recompile everything:

make re

🧪 How to Use

After compiling, include libft.a in your own project:

#include "libft.h"

int main(void)
{
    char str[] = "Hello, 42!";
    printf("%zu\n", ft_strlen(str));
    return 0;
}


Compile your program with:

gcc main.c libft.a

💡 Key Learning Outcomes

Through libft, you will learn:

How to write clean, modular C code

How to understand and replicate libc behavior

How to manage memory safely (malloc, free)

How to structure a reusable library

How Makefiles work

This project strengthens your fundamentals and sets you up for success in more advanced system-level projects.
