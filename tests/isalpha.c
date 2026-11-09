/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   isalpha.c                                         :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gcerto-m <gcerto-m@student.42porto.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/03 12:20:56 by gcerto-m         #+#    #+#              */
/*   Updated: 2026/11/06 10:58:23 by gcerto-m        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "../libft.h"

int	main(int argc, char *argv[])
{
	if (argc > 1)
	{
		printf("isalpha(\'%c\') -> %d\n",
			argv[1][0],
			isalpha(argv[1][0]));
		printf("ft_isalpha(\'%c\') -> %d\n",
			argv[1][0],
			ft_isalpha(argv[1][0]));
		return (0);
	}
	else
	{
		printf("Invalid argument:\n\tProgram use: %s <char>\n", argv[0]);
		return (1);
	}
}
