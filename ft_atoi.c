/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_atoi.c                                         :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gcerto-m <gcerto-m@student.42porto.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/04 10:59:01 by gcerto-m         #+#    #+#              */
/*   Updated: 2026/11/10 14:46:31 by gcerto-m        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isspace(int c)
{
	return (c == ' ' || c == '\f'
		|| c == '\n' || c == '\r'
		|| c == '\t' || c == '\v');
}

/// @brief Converts the initial portion of the string pointed to by nptr to int
/// @param nptr String to be converted
/// @return Converted Value
int	ft_atoi(const char *nptr)
{
	char	mult;
	int		result;

	mult = 1;
	result = 0;
	while (isspace(*nptr))
		nptr++;
	if (*nptr == '+')
		nptr++;
	if (*nptr == '-')
	{
		mult = -1;
		nptr++;
	}
	while (ft_isdigit(*nptr))
	{
		result = result * 10 + (*nptr - '0');
		nptr++;
	}
	return (result * mult);
}
