/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   lst.c                                             :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gcerto-m <gcerto-m@student.42porto.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/10 16:19:13 by gcerto-m         #+#    #+#              */
/*   Updated: 2026/11/12 12:07:40 by gcerto-m        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdlib.h>

void	print_node(void *str)
{
	ft_putendl_fd(str, 1);
}

void	*map_node(void *str)
{
	char			*new_str;
	unsigned int	str_len;

	str_len = ft_strlen(str);
	new_str = malloc(str_len + 8);
	ft_strlcpy(new_str, str, str_len);
	ft_strlcat(new_str, " (Map)", str_len + 8);
	return (new_str);
}

int	main(void)
{
	t_list	*list;

	list = ft_lstnew("Node 2");
	ft_lstadd_back(&list, ft_lstnew("Node 3"));
	ft_lstadd_front(&list, ft_lstnew("Node 1"));
	ft_lstadd_back(&list, ft_lstnew("Node 4"));
	ft_lstadd_front(&list, ft_lstnew("Node 0"));
	ft_putendl_fd("List: ", 1);
	ft_lstiter(list, print_node);
	ft_putstr_fd("Size: ", 1);
	ft_putendl_fd(ft_itoa(ft_lstsize(list)), 1);
	ft_putstr_fd("First: ", 1);
	ft_putendl_fd(list->content, 1);
	ft_putstr_fd("Last: ", 1);
	ft_putendl_fd(ft_lstlast(list)->content, 1);
	ft_putendl_fd("\nMap: ", 1);
	list = ft_lstmap(list, map_node, 0);
	ft_putendl_fd("\nList: ", 1);
	ft_lstiter(list, print_node);
	ft_putendl_fd("\nClear:", 1);
	ft_lstclear(&list, print_node);
	ft_putendl_fd("List: ", 1);
	ft_lstiter(list, print_node);
	ft_putstr_fd("Size: ", 1);
	ft_putendl_fd(ft_itoa(ft_lstsize(list)), 1);
}
