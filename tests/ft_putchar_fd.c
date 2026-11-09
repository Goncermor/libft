/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_putchar_fd.c                                   :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gcerto-m <gcerto-m@student.42porto.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/03 12:20:56 by gcerto-m         #+#    #+#              */
/*   Updated: 2026/11/06 12:09:57 by gcerto-m        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "../libft.h"

int	main(int argc, char *argv[])
{
	if (argc > 1)
	{
		write(1, "If you see the char you passed as argument here -> ", 52);
		ft_putchar_fd(argv[1][0], 1);
		write(1, " <-\nThe function works.", 23);
		return (0);
	}
	else
	{
		printf("Invalid argument:\n\tProgram use: %s <char>\n", argv[0]);
		return (1);
	}
}
