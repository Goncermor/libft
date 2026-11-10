/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_itoa.c                                         :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gcerto-m <gcerto-m@student.42porto.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/06 17:07:03 by gcerto-m         #+#    #+#              */
/*   Updated: 2026/11/10 16:26:11 by gcerto-m        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/// @brief Counts the digits with dcount and returns the absolute value.
/// @param num[in] Number being counted
/// @param dcount[out] Pointer to digit count
/// @return Absolute value of num.
static unsigned char	number_size(long num, unsigned char *dcount)
{
	unsigned int	absnum;

	*dcount = 0;
	if (num < 0)
	{
		(*dcount)++;
		num = -num;
	}
	absnum = num;
	while (num != 0)
	{
		(*dcount)++;
		num /= 10;
	}
	if (num == 0)
		*dcount = 1;
	return (absnum);
}

char	*ft_itoa(int n)
{
	unsigned int	num;
	unsigned char	len;
	char			*ptr;

	num = number_size(n, &len);
	ptr = malloc(len + 1);
	ptr[len] = '\0';
	len--;
	if (n < 0)
		ptr[0] = '-';
	ptr[len] = '0' + num % 10;
	len--;
	num /= 10;
	while (num != 0)
	{
		ptr[len] = '0' + num % 10;
		len--;
		num /= 10;
	}
	return (ptr);
}
