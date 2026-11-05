/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_isdigit.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gcerto-m <gcerto-m@student.42porto.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/03 12:05:22 by gcerto-m         #+#    #+#              */
/*   Updated: 2026/11/03 12:43:10 by gcerto-m        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

// Returns 1 if the tested char is a digit and 0 if it's not.

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
