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
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*next;

	new_lst = 0;
	while (lst != 0)
	{
		ft_lstadd_back(&new_lst, ft_lstnew(f(lst->content)));
		next = lst->next;
		if (del == 0)
			free(lst);
		else
			ft_lstdelone(lst, del);
		lst = next;
	}
	return (new_lst);
}
