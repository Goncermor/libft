/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   libft.h                                           :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gcerto-m <gcerto-m@student.42porto.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/03 12:18:18 by gcerto-m         #+#    #+#              */
/*   Updated: 2026/11/09 12:56:30 by gcerto-m        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isspace(int c);
void			ft_bzero(void *s, size_t n);
size_t			ft_strlen(const char *s);
size_t			ft_strlcpy(char *dst, const char *src, size_t size);
t_list			*ft_lstnew(void *content);
t_list			*ft_lstlast(t_list *lst);
unsigned int	ft_lstsize(t_list *lst);
t_list			*ft_lstlast(t_list *lst);
size_t			ft_strlcat(char *dst, const char *src, size_t size);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
void			ft_putendl_fd(char *s, int fd);
void			*ft_memset(void *s, int c, size_t n);
int				ft_isprint(int c);
int				ft_isascii(int c);
int				ft_isalnum(int c);
int				ft_tolower(int c);
int				ft_toupper(int c);
int				ft_atoi(const char *nptr);
char			*ft_strdup(const char *s);
void			*ft_calloc(size_t nmemb, size_t size);
char			*ft_itoa(int n);

#endif
