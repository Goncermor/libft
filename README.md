*This project has been created as part of the 42 curriculum by gcerto-m*

# Description

**libft** is a C library that re-implements some libc functions, plus some extra string, output and linked-list utilities. The goal is to understand how these functions work under the hood: memory layout, pointer arithmetic, null-termination, edge cases and dynamic allocation.

The result is a static library, `libft.a`, which can be reused in later 42 projects.

# Instructions

## Build

```sh
make        # builds libft.a
make clean  # removes object files
make fclean # removes object files and libft.a
make re     # fclean + all
```

## Use in a project

Include the header and link against the library:

```c
#include "libft.h"
```

```sh
cc -Wall -Wextra -Werror main.c -L. -lft -o program
```

# Functions

## libc functions

### Character checks / conversion

| Prototype | Description |
|--|--|
| `int ft_isalpha(int c)` | Checks if `c` is an alphabetic character |
| `int ft_isdigit(int c)` | Checks if `c` is a digit (`0`–`9`) |
| `int ft_isalnum(int c)` | Checks if `c` is alphanumeric |
| `int ft_isascii(int c)` | Checks if `c` is in the ASCII range (0–127) |
| `int ft_isprint(int c)` | Checks if `c` is printable (including space) |
| `int ft_toupper(int c)` | Converts a lowercase letter to uppercase |
| `int ft_tolower(int c)` | Converts an uppercase letter to lowercase |

### Strings

| Prototype | Description |
|--|--|
| `size_t ft_strlen(const char *s)` | Returns the length of `s` |
| `size_t ft_strlcpy(char *dst, const char *src, size_t size)` | Copies `src` into `dst` (at most `size - 1` chars, always null-terminated); returns `strlen(src)` |
| `size_t ft_strlcat(char *dst, const char *src, size_t size)` | Appends `src` to `dst` within a buffer of `size`; returns the length of the string it tried to create |
| `char *ft_strchr(const char *s, int c)` | Returns a pointer to the first occurrence of `c` in `s` |
| `char *ft_strrchr(const char *s, int c)` | Returns a pointer to the last occurrence of `c` in `s` |
| `int ft_strncmp(const char *s1, const char *s2, size_t n)` | Compares at most `n` characters of two strings |
| `char *ft_strnstr(const char *big, const char *little, size_t len)` | Finds `little` in the first `len` characters of `big` |
| `int ft_atoi(const char *nptr)` | Converts a string to an `int` |
| `char *ft_strdup(const char *s)` | Returns a newly allocated copy of `s` |

### Memory

| Prototype | Description |
|--|--|
| `void *ft_memset(void *s, int c, size_t n)` | Fills `n` bytes of `s` with the byte `c` |
| `void ft_bzero(void *s, size_t n)` | Sets `n` bytes of `s` to zero |
| `void *ft_memcpy(void *dest, const void *src, size_t n)` | Copies `n` bytes (areas must not overlap) |
| `void *ft_memmove(void *dest, const void *src, size_t n)` | Copies `n` bytes (areas may overlap) |
| `void *ft_memchr(const void *s, int c, size_t n)` | Finds the byte `c` in the first `n` bytes of `s` |
| `int ft_memcmp(const void *s1, const void *s2, size_t n)` | Compares the first `n` bytes of two memory areas |
| `void *ft_calloc(size_t nmemb, size_t size)` | Allocates zero-initialised memory for an array |

## Additional functions

| Prototype | Description |
|--|--|
| `char *ft_substr(char const *s, unsigned int start, size_t len)` | Returns a new substring of `s` starting at `start`, of at most `len` chars |
| `char *ft_strjoin(char const *s1, char const *s2)` | Returns a new string made of `s1` followed by `s2` |
| `char *ft_strtrim(char const *s1, char const *set)` | Returns a copy of `s1` with characters from `set` removed from both ends |
| `char **ft_split(char const *s, char c)` | Splits `s` into a NULL-terminated array of words separated by `c` |
| `char *ft_itoa(int n)` | Converts an `int` to a newly allocated string |
| `char *ft_strmapi(char const *s, char (*f)(unsigned int, char))` | Returns a new string made by applying `f` to each character |
| `void ft_striteri(char *s, void (*f)(unsigned int, char *))` | Applies `f` to each character of `s` in place |
| `void ft_putchar_fd(char c, int fd)` | Writes `c` to the file descriptor `fd` |
| `void ft_putstr_fd(char *s, int fd)` | Writes `s` to `fd` |
| `void ft_putendl_fd(char *s, int fd)` | Writes `s` followed by a newline to `fd` |
| `void ft_putnbr_fd(int n, int fd)` | Writes the integer `n` to `fd` |

## Linked list functions

All list functions use this struct:

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
```

| Prototype | Description |
|--|--|
| `t_list *ft_lstnew(void *content)` | Creates a new node with `content` |
| `void ft_lstadd_front(t_list **lst, t_list *new)` | Adds `new` at the start of the list |
| `void ft_lstadd_back(t_list **lst, t_list *new)` | Adds `new` at the end of the list |
| `unsigned int ft_lstsize(t_list *lst)` | Returns the number of nodes |
| `t_list *ft_lstlast(t_list *lst)` | Returns the last node |
| `void ft_lstdelone(t_list *lst, void (*del)(void *))` | Frees one node and its content with `del` |
| `void ft_lstclear(t_list **lst, void (*del)(void *))` | Frees every node and sets `*lst` to `NULL` |
| `void ft_lstiter(t_list *lst, void (*f)(void *))` | Applies `f` to the content of every node |
| `t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))` | Returns a new list made by applying `f` to every node's content |

# Resources

## References
+ Linux man pages
+ glibc source code

## Tools
+ Visual Studio Code
+ gdb
+ cc compiler

# AI Use

AI assistants (DeepSeek and Claude) were used to explain concepts and to find and explain bugs in my implementations.
Every function was written, reviewed and tested by me.
