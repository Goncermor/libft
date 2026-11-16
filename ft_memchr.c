/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memchr.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gcerto-m <gcerto-m@student.42porto.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/04 12:44:20 by gcerto-m         #+#    #+#              */
/*   Updated: 2026/11/09 14:54:38 by gcerto-m        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned long	index;

	index = 0;
	ptr = (unsigned char *) s;
	while (index != n && ptr[index] != '\0')
	{
		if (ptr[index] == c)
			return (&ptr[index]);
		index++;
	}
	if (c == '\0')
		return (&ptr[index]);
	return (0);
}
