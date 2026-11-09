/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_isalnum.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gcerto-m <gcerto-m@student.42porto.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/03 13:37:22 by gcerto-m         #+#    #+#              */
/*   Updated: 2026/11/03 13:45:43 by gcerto-m        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

// Returns 1 if the tested char is a digit and 0 if it's not.

/// @brief 
/// @param c 
/// @return 
int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}
