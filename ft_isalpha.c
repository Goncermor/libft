/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_isalpha.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gcerto-m <gcerto-m@student.42porto.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/03 12:05:22 by gcerto-m         #+#    #+#              */
/*   Updated: 2026/11/03 12:38:50 by gcerto-m        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

// Returns 1 if the tested char is alphabetical and 0 if it's not.

/// @brief 
/// @param c 
/// @return 
int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
