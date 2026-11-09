/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   itoa.c                                            :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gcerto-m <gcerto-m@student.42porto.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/03 12:20:56 by gcerto-m         #+#    #+#              */
/*   Updated: 2026/11/06 17:03:08 by gcerto-m        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "../libft.h"

int	main(int argc, char *argv[])
{
	unsigned int	test_num;

	if (argc > 1)
	{
		test_num = atoi(argv[1]);
		//printf("itoa(%d) -> %d\n",
		//	test_num,
		//	itoa(test_num));
		printf("ft_itoa(%d) -> \"%s\"\n",
			test_num,
		ft_itoa(test_num));
		return (0);
	}
	else
	{
		printf("Invalid argument:\n\tProgram use: %s <number>\n", argv[0]);
		return (1);
	}
}
