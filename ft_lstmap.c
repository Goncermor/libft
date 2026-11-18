/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstmap.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gcerto-m <gcerto-m@student.42porto.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/09 16:12:04 by gcerto-m         #+#    #+#              */
/*   Updated: 2026/11/09 16:12:18 by gcerto-m        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*mapped_node;
	void	*content;

	if (f == 0 || del == 0)
		return (0);
	new_lst = 0;
	while (lst != 0)
	{
		content = f(lst->content);
		mapped_node = ft_lstnew(content);
		if (mapped_node == 0)
		{
			del(content);
			ft_lstclear(&new_lst, del);
			return (0);
		}
		ft_lstadd_back(&new_lst, mapped_node);
		lst = lst->next;
	}
	return (new_lst);
}
