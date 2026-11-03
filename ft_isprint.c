/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_isprint.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gcerto-m <gcerto-m@student.42porto.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/03 13:45:23 by gcerto-m         #+#    #+#              */
/*   Updated: 2026/11/03 13:53:19 by gcerto-m        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

// Returns 1 if the tested char is ascii / 7 bit and 0 if it's not.

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
