/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memset.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gcerto-m <gcerto-m@student.42porto.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/03 15:26:24 by gcerto-m         #+#    #+#              */
/*   Updated: 2026/11/03 15:58:31 by gcerto-m        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*mem_ptr;

	mem_ptr = s;
	while (n != 0)
	{
		*mem_ptr = c;
		s++;
		n--;
	}
	return (s);
}
