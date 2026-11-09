/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memset.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gcerto-m <gcerto-m@student.42porto.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/03 15:26:24 by gcerto-m         #+#    #+#              */
/*   Updated: 2026/11/06 12:24:24 by gcerto-m        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/// @brief 
/// @param s 
/// @param c 
/// @param n 
/// @return 
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*mem_ptr;

	mem_ptr = s;
	while (n != 0)
	{
		*mem_ptr = c;
		mem_ptr++;
		n--;
	}
	return (s);
}
