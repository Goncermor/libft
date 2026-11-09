/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_isascii                                        :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gcerto-m <gcerto-m@student.42porto.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/03 13:45:23 by gcerto-m         #+#    #+#              */
/*   Updated: 2026/11/03 13:51:42 by gcerto-m        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

// Returns 1 if the tested char is ascii / 7 bit and 0 if it's not.

/// @brief 
/// @param c 
/// @return 
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
