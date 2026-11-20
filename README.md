*This project has been created as part of the 42 curriculum by gcerto-m.*

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
cc -Wall -Wextra -Werror main.c libft.a -o program
```

# Functions

The library has 43 functions in three groups. Every function that allocates memory returns `NULL` if the allocation fails; the caller must `free` what it gets back.

## Part 1 – libc functions

Same prototypes as the originals (see their `man` pages), with the `ft_` prefix.

### Character checks / conversion

| Prototype | Returns |
|--|--|
| `int ft_isalpha(int c)` | `1` if `c` is a letter (`a`–`z`, `A`–`Z`), else `0` |
| `int ft_isdigit(int c)` | `1` if `c` is a digit (`0`–`9`), else `0` |
| `int ft_isalnum(int c)` | `1` if `c` is a letter or a digit, else `0` |
| `int ft_isascii(int c)` | `1` if `c` is in the ASCII range (0–127), else `0` |
| `int ft_isprint(int c)` | `1` if `c` is printable (32–126, space included), else `0` |
| `int ft_toupper(int c)` | The uppercase version of `c` if it is a lowercase letter, otherwise `c` unchanged |
| `int ft_tolower(int c)` | The lowercase version of `c` if it is an uppercase letter, otherwise `c` unchanged |

### Strings

| Prototype | Description |
|--|--|
| `size_t ft_strlen(const char *s)` | Returns the number of characters in `s`, not counting the `'\0'` |
| `size_t ft_strlcpy(char *dst, const char *src, size_t size)` | Copies at most `size - 1` characters of `src` into `dst` and null-terminates it (if `size > 0`). Returns `strlen(src)`, so a result `>= size` means the copy was truncated |
| `size_t ft_strlcat(char *dst, const char *src, size_t size)` | Appends `src` to the end of `dst`, never writing past `size` bytes in total. Returns the length of the string it tried to create (`strlen(dst) + strlen(src)`, or `size + strlen(src)` if `dst` was already longer than `size`) |
| `char *ft_strchr(const char *s, int c)` | Returns a pointer to the first `c` in `s`, or `NULL`. Searching for `'\0'` returns a pointer to the terminator |
| `char *ft_strrchr(const char *s, int c)` | Returns a pointer to the last `c` in `s`, or `NULL`. Searching for `'\0'` returns a pointer to the terminator |
| `int ft_strncmp(const char *s1, const char *s2, size_t n)` | Compares at most `n` characters as `unsigned char`. Returns `0` if equal, otherwise the difference of the first differing characters |
| `char *ft_strnstr(const char *big, const char *little, size_t len)` | Looks for `little` within the first `len` characters of `big`. Returns `big` if `little` is empty, a pointer to the match, or `NULL` |
| `int ft_atoi(const char *nptr)` | Skips leading whitespace, reads one optional `+`/`-` and then the digits that follow. Returns the resulting `int` |

### Memory

| Prototype | Description |
|--|--|
| `void *ft_memset(void *s, int c, size_t n)` | Fills the first `n` bytes of `s` with `(unsigned char)c`. Returns `s` |
| `void ft_bzero(void *s, size_t n)` | Sets the first `n` bytes of `s` to `0` |
| `void *ft_memcpy(void *dest, const void *src, size_t n)` | Copies `n` bytes from `src` to `dest`; the areas must not overlap. Returns `dest` |
| `void *ft_memmove(void *dest, const void *src, size_t n)` | Copies `n` bytes from `src` to `dest`, copying backwards when needed so overlapping areas are handled. Returns `dest` |
| `void *ft_memchr(const void *s, int c, size_t n)` | Returns a pointer to the first byte equal to `(unsigned char)c` in the first `n` bytes of `s`, or `NULL` |
| `int ft_memcmp(const void *s1, const void *s2, size_t n)` | Compares the first `n` bytes as `unsigned char`. Returns `0` if equal, a positive value if `s1` is greater, a negative value otherwise |

### With `malloc`

| Prototype | Description |
|--|--|
| `void *ft_calloc(size_t nmemb, size_t size)` | Allocates an array of `nmemb` elements of `size` bytes, all set to `0`. If `nmemb` or `size` is `0`, returns a unique pointer that can be passed to `free`. Returns `NULL` if `nmemb * size` would overflow |
| `char *ft_strdup(const char *s)` | Returns a new copy of `s` |

## Part 2 – Additional functions

| Prototype | Description |
|--|--|
| `char *ft_substr(char const *s, unsigned int start, size_t len)` | Returns a new string with at most `len` characters of `s`, starting at index `start`. If `start` is past the end of `s`, returns an empty string |
| `char *ft_strjoin(char const *s1, char const *s2)` | Returns a new string: `s1` followed by `s2` |
| `char *ft_strtrim(char const *s1, char const *set)` | Returns a copy of `s1` with every character found in `set` removed from the start and the end |
| `char **ft_split(char const *s, char c)` | Splits `s` into words separated by `c` (consecutive separators produce no empty words). Returns a `NULL`-terminated array of new strings. If any allocation fails, everything already allocated is freed and `NULL` is returned |
| `char *ft_itoa(int n)` | Returns a new string with the decimal representation of `n` (negative numbers and `INT_MIN` included) |
| `char *ft_strmapi(char const *s, char (*f)(unsigned int, char))` | Returns a new string where each character is `f(index, s[index])` |
| `void ft_striteri(char *s, void (*f)(unsigned int, char *))` | Calls `f(index, &s[index])` on each character, so `f` can change `s` in place |
| `void ft_putchar_fd(char c, int fd)` | Writes the character `c` to the file descriptor `fd` |
| `void ft_putstr_fd(char *s, int fd)` | Writes the string `s` to `fd` |
| `void ft_putendl_fd(char *s, int fd)` | Writes `s` to `fd`, followed by a newline |
| `void ft_putnbr_fd(int n, int fd)` | Writes the integer `n` in decimal to `fd` (`INT_MIN` included) |

## Part 3 – Linked list

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
| `t_list *ft_lstnew(void *content)` | Returns a new node with `content` and `next` set to `NULL` |
| `void ft_lstadd_front(t_list **lst, t_list *new)` | Adds `new` at the start of the list and makes it the new head |
| `unsigned int ft_lstsize(t_list *lst)` | Returns the number of nodes in the list |
| `t_list *ft_lstlast(t_list *lst)` | Returns the last node, or `NULL` if the list is empty |
| `void ft_lstadd_back(t_list **lst, t_list *new)` | Adds `new` at the end of the list (it becomes the head if the list is empty) |
| `void ft_lstdelone(t_list *lst, void (*del)(void *))` | Frees the node's content with `del`, then frees the node. Does not touch `next` |
| `void ft_lstclear(t_list **lst, void (*del)(void *))` | Frees the node and all nodes after it (content with `del`, nodes with `free`), then sets `*lst` to `NULL` |
| `void ft_lstiter(t_list *lst, void (*f)(void *))` | Calls `f` on the content of every node |
| `t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))` | Returns a new list whose contents are `f` applied to each node's content. If an allocation fails, the new list is freed with `del` and `NULL` is returned |

# Resources

## References
+ Linux man pages
+ glibc source code

## Tools
+ Visual Studio Code
+ gdb
+ cc compiler

## AI Use

AI assistants (DeepSeek and Claude) were used to explain concepts and to find and explain bugs in my implementations and help write the README.
