/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   mem2.c                                            :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gcerto-m <gcerto-m@student.42porto.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/13 11:13:46 by gcerto-m         #+#    #+#              */
/*   Updated: 2026/11/13 12:17:56 by gcerto-m        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "../libft.h"

void	test_memmove(void)
{
	char	*str;

	str = malloc(7);
	strcpy(str, "DDAABBCC");
	ft_memmove(str, str + 2, 4);
	if (strcmp(str, "AABBBBCC") == 0)
		printf("ft_memmove \e[1;92mPASS\033[0m\n");
	else
		printf("ft_memmove \e[1;91mFAIL\033[0m\n");
}

int	main(void)
{
	usleep(50000);
	test_memmove();
}
