# 42_Libft
Libft is a library of C functions that includes implementations of basic standard library functions as well as other useful functions for string manipulation, memory management, file operations, and linked lists.

## Getting started
To use the library in a C program, follow these steps:
  1. Clone the repository: git clone https://github.com/ceferrei/42_Libft.git
  2. Compile the library: make
  3. Link the library with your program: cc -Wall -Wextra -Werror main.c libft.a

## List of functions

### Character functions
  - `ft_isalpha`: check if a character is alphabetic
  - `ft_isdigit`: check if a character is a digit
  - `ft_isalnum`: check if a character is alphanumeric
  - `ft_isascii`: check if a character is an ASCII character
  - `ft_isprint`: check if a character is printable
  - `ft_toupper`: convert a character to uppercase
  - `ft_tolower`: convert a character to lowercase
  
 ### String functions
- `ft_strlen`: calculate the length of a string
- `ft_strcpy`: copy a string
- `ft_strncpy`: copy a string up to a specified number of characters
- `ft_strcmp`: compare two strings
- `ft_strncmp`: compare two strings up to a specified number of characters
- `ft_strcat`: concatenate two strings
- `ft_strncat`: concatenate two strings up to a specified number of characters
- `ft_strchr`: find the first occurrence of a character in a string
- `ft_strrchr`: find the last occurrence of a character in a string
- `ft_strstr`: find the first occurrence of a substring in a string
- `ft_strnstr`: find the first occurrence of a substring up to a specified number of characters in a string
- `ft_strdup`: duplicate a string
- `ft_substr`: create a substring from a string
- `ft_strjoin`: concatenate two strings
- `ft_strtrim`: trim whitespace characters from the beginning and end of a string
- `ft_split`: split a string into an array of substrings
- `ft_itoa`: convert an integer to a string
- `ft_strmapi`: apply a function to each character in a string
- `ft_striteri`: apply a function to each character in a string, with the index of the character as an argument

### Memory functions
- `ft_memset`: set a block of memory to a specified value
- `ft_bzero`: set a block of memory to zero
- `ft_memcpy`: copy a block of memory
- `ft_memccpy`: copy a block of memory up to a specified character
- `ft_memmove`: move a block of memory to a new location
- `ft_memchr`: find the first occurrence of a character in a block of memory
- `ft_memcmp`: compare two blocks of memory
- `ft_calloc`: allocate and zero-initialize a block of memory

### Linked list functions
- `ft_lstnew`: creates a new linked list node
- `ft_lstadd_front`: adds a node to the beginning of a linked list
- `ft_lstsize`: counts the number of nodes in a linked list
- `ft_lstlast`: gets the last node of a linked list
- `ft_lstadd_back`: adds a node to the end of a linked list
- `ft_lstdelone`: deletes a node from a linked list
- `ft_lstclear`: deletes all nodes from a linked list
- `ft_lstiter`: applies a function to each node of a linked list
- `ft_lstmap`: applies a function to each node of a linked list, returning a new list with the results

### File Descriptor Functions
- `ft_putchar_fd`: writes a given character to a file descriptor.
- `ft_putstr_fd`: writes a given string to a file descriptor.
- `ft_putendl_fd`: writes a given string, followed by a newline character, to a file descriptor.
- `ft_putnbr_fd`: writes a given integer to a file descriptor.

## Notice
This project follows the 42School coding standard, which may result in unusual implementation choices. While efforts have been made to optimize certain areas, there is always room for improvement.

