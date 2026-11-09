/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstlast.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gcerto-m <gcerto-m@student.42porto.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/04 13:44:27 by gcerto-m         #+#    #+#              */
/*   Updated: 2026/11/09 12:57:00 by gcerto-m        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Returns the last element of the list.

t_list	*ft_lstlast(t_list *lst)
{
	while (lst->next != 0)
		lst = lst->next;
	return (lst);
}
