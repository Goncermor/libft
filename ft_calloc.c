/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_calloc.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/03 16:19:45 by username         #+#    #+#              */
/*   Updated: 2026/11/04 10:55:04 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

void	*calloc(size_t nmemb, size_t size)
{
	size_t			index;
	unsigned char	*ptr;

	if (nmemb == 0 || size == 0)
		return (0);
	index = 0;
	ptr = malloc(size * nmemb);
	while (index != size * nmemb)
	{
		ptr[index] = 0;
	}
	return (ptr);
}
