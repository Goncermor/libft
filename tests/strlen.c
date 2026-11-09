/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   strlen.c                                          :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gcerto-m <gcerto-m@student.42porto.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/03 12:20:56 by gcerto-m         #+#    #+#              */
/*   Updated: 2026/11/06 12:28:37 by gcerto-m        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../libft.h"

int	main(int argc, char *argv[])
{
	if (argc > 1)
	{
		printf("strlen(\"%s\") -> %ld\n",
			argv[1],
			strlen(argv[1]));
		printf("ft_strlen(\"%s\") -> %ld\n",
			argv[1],
			ft_strlen(argv[1]));
		return (0);
	}
	else
	{
		printf("Invalid argument:\n\tProgram use: %s <string>\n", argv[0]);
		return (1);
	}
}
