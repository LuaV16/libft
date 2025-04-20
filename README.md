I'm building my own C library by reimplementing essential standard functions from scratch. This project is an exercise to gain a deeper understanding of the C programming language, improve my low-level programming skills, and strengthen my grasp of memory management and pointers. It took me around two weeks to complete. In addition to the recreated functions from libft, the project also includes some extra functions that are not part of the original library, or that differ slightly in behavior or implementation.

In this README, I’ll include a brief summary of what each function does, as well as an explanation of how I built the Makefile used to compile the library.


## Table of Contents

- [Standard functions](#standard-functions)  
  - [Character check functions](#character-check-functions)  
  - [Memory functions](#memory-functions)  
  - [String functions](#string-functions)  
  - [Conversion functions](#conversion-functions)  
  - [Memory allocation](#memory-allocation)  

- [Aditional functions](#aditional-functions)  
  - [String manipulation](#string-manipulation)  
  - [Conversion](#conversion)  
  - [File descriptor output](#file-descriptor-output)  

- [Linked List Functions](#linked-list-functions)  
  - [List creation and basic operations](#list-creation-and-basic-operations)  
  - [List deletion and cleanup](#list-deletion-and-cleanup)  

- [Makefile](#makefile)


## Standard functions

This section includes reimplementations of commonly used functions from the C standard library. All of them have been written from scratch, without using the original implementations, in order to better understand how they work. These functions cover character checks, memory operations, and string manipulation, and are a fundamental part of this custom C library.

#### Character check functions
- **`isalpha`** – Returns non-zero if the given character is an alphabetic letter (A–Z or a–z); otherwise, returns 0.
- **`isdigit`** – Returns non-zero if the given character is a decimal digit (0–9); otherwise, returns 0.
- **`isalnum`** – Returns non-zero if the character is alphanumeric (A–Z, a–z, or 0–9).
- **`isascii`** – Returns non-zero if the character is part of the ASCII table (0–127).
- **`isprint`** – Returns non-zero if the character is printable (ASCII 32–126).
- **`toupper`** – Converts a lowercase letter to its uppercase equivalent. Returns the character unchanged if it's not a lowercase letter.
- **`tolower`** – Converts an uppercase letter to its lowercase equivalent. Returns the character unchanged if it's not an uppercase letter.

#### Memory functions
- **`memset`** – Fills the first `n` bytes of the memory area pointed to by `s` with the constant byte `c`.
- **`bzero`** – Sets the first `n` bytes of the memory area pointed to by `s` to zero.
- **`memcpy`** – Copies `n` bytes from memory area `src` to memory area `dst`. The memory areas must not overlap.
- **`memmove`** – Similar to `memcpy`, but safely handles overlapping memory areas.
- **`memchr`** – Scans the initial `n` bytes of the memory area pointed to by `s` for the first occurrence of character `c`.
- **`memcmp`** – Compares the first `n` bytes of the memory areas `s1` and `s2`. Returns an integer less than, equal to, or greater than zero depending on the comparison.

#### String functions
- **`strlen`** – Calculates the length of a null-terminated string.
- **`strlcpy`** – Copies up to `size - 1` characters from `src` to `dst`, NUL-terminating the result.
- **`strlcat`** – Appends `src` to the end of `dst` of total size `size`, NUL-terminating the result.
- **`strchr`** – Returns a pointer to the first occurrence of character `c` in the string `s`, or NULL if not found.
- **`strrchr`** – Returns a pointer to the last occurrence of character `c` in the string `s`, or NULL if not found.
- **`strncmp`** – Compares up to `n` characters of the strings `s1` and `s2`. Returns an integer less than, equal to, or greater than zero depending on the comparison.
- **`strnstr`** – Locates the first occurrence of the null-terminated string `little` in the string `big`, where not more than `len` characters are searched.
- **`strdup`** – Returns a pointer to a new string which is a duplicate of the string `s`. Memory for the new string is obtained with `malloc`.

#### Conversion functions
- **`atoi`** – Converts the initial portion of the string pointed to by `nptr` to an `int`.

#### Memory allocation
- **`calloc`** – Allocates memory for an array of `nmemb` elements of `size` bytes each and initializes all bytes to zero.



## Aditional functions

Besides the standard `libft` functions, I’ve also added a bunch of extra utilities that are pretty common and useful in C. Most of them are for working with strings, managing memory, or printing to file descriptors. Here's a quick overview of what each one does:

#### String manipulation
- **`ft_substr`** – Returns a newly allocated substring from the string `s`, starting at index `start` and with a maximum length of `len`. Returns `NULL` if memory allocation fails.
- **`ft_strjoin`** – Returns a new string resulting from the concatenation of `s1` and `s2`. Returns `NULL` on allocation failure.
- **`ft_strtrim`** – Trims all characters from `set` at the beginning and end of the string `s1`, returning a new string. Returns `NULL` if memory allocation fails.
- **`ft_split`** – Splits the string `s` into an array of strings using the delimiter character `c`. The array is NULL-terminated. Returns `NULL` on memory allocation failure.
- **`ft_strmapi`** – Applies function `f` to each character of the string `s`, passing its index and character, and returns a new string with the resulting characters.
- **`ft_striteri`** – Applies the function `f` to each character of the string `s`, passing its index and a pointer to the character. This function modifies the original string in place.

#### Conversion
- **`ft_itoa`** – Converts the integer `n` to its string representation. Returns a new allocated string or `NULL` on memory allocation failure.

#### File descriptor output
- **`ft_putchar_fd`** – Writes the character `c` to the given file descriptor `fd`.
- **`ft_putstr_fd`** – Writes the string `s` to the given file descriptor `fd`.
- **`ft_putendl_fd`** – Writes the string `s` followed by a newline to the given file descriptor `fd`.
- **`ft_putnbr_fd`** – Writes the integer `n` to the given file descriptor `fd`.

## Linked List Functions

This section includes a small set of functions to work with singly linked lists. These are great for practicing dynamic memory management and understanding how data structures work in C.

Before getting into the functions, here’s the structure used to define a list node:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
} t_list;
```
#### List creation and basic operations
- **`ft_lstnew`** – Creates a new node with the given content. The `next` pointer is set to `NULL`.
- **`ft_lstadd_front`** – Adds the node `new` to the front of the list `lst`.
- **`ft_lstadd_back`** – Adds the node `new` to the end of the list `lst`.
- **`ft_lstsize`** – Returns the number of nodes in the list `lst`.
- **`ft_lstlast`** – Returns the last node of the list `lst`.

#### List deletion and cleanup
- **`ft_lstdelone`** – Frees the memory of a node's content using the provided function `del`, then frees the node itself.
- **`ft_lstclear`** – Deletes and frees the entire list `lst` using `del`, and sets the pointer to `NULL`.
- **`ft_lstiter`** – Iterates through the list `lst`, applying the function `f` to the content of each node.
- **`ft_lstmap`** – Creates a new list by applying the function `f` to the content of each node in `lst`. If allocation fails, `del` is used to free the content of the new list.

## Makefile

To make compiling the library easier and more efficient, I created a Makefile. This allows me to build the project just by running make in the terminal, without having to type out the compilation commands every time.

Here's a quick breakdown of what the Makefile does:

- **`NAME`** - The name of the static library that will be created, in this case libft.a.

- **`CC`** - The compiler used (cc).

- **`CFLAGS`** - Compilation flags to enforce stricter error checking (-Wall -Wextra -Werror).

- **`AR`** - The archiver command used to create the .a library file.

- **`SRCS / OBJS`** - Lists of source files and their corresponding object files for the main part of the project.

- **`BONUS_SRCS / BONUS_OBJS`** - Extra source files related to linked list operations.

The Makefile includes several rules:

- **`all`** - Builds the library from the main source files.

- **`bonus`** - Adds the bonus linked list functions to the library.

- **`clean`** - Deletes the object files to keep the folder tidy.

- **`fclean`** - Does everything clean does and also removes the compiled library.

- **`re`** - Runs a full clean and rebuild.

This setup makes compiling and maintaining the library much easier as the project grows.
