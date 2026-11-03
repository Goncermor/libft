/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_calloc.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gcerto-m <gcerto-m@student.42porto.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/03 16:19:45 by gcerto-m         #+#    #+#              */
/*   Updated: 2026/11/03 16:26:43 by gcerto-m        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

void	*calloc(size_t nmemb, size_t size)
{
	size_t	index;
	void	*ptr;

	if (nmemb == 0 || size == 0)
		return (0);
	index = nmemb * size;
	ptr = malloc(size * nmemb);
	return (ptr);
}
