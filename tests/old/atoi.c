/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   atoi.c                                            :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gcerto-m <gcerto-m@student.42porto.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/03 12:20:56 by gcerto-m         #+#    #+#              */
/*   Updated: 2026/11/09 12:16:11 by gcerto-m        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "../libft.h"

static void	test(char *t)
{
	int	original;
	int	ours;

	original = atoi(t);
	ours = ft_atoi(t);
	printf("\natoi(\"%s\") -> %d", t, original);
	printf("\nft_atoi(\"%s\") -> %d", t, ours);
	printf("\nResult: ");
	if (original == ours)
		printf("\e[1;92mPASSED\033[0m\n");
	else
		printf("\e[1;91mFAILED\033[0m\n");
}

int	main(void)
{
	test("-2147483648");
	test("");
	test("0");
	test("     -1");
	test("     +++-+-1");
	test("1234abc56789");
	test("hello world");
}
