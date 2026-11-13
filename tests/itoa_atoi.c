/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   itoa_atoi.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gcerto-m <gcerto-m@student.42porto.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/10 16:19:13 by gcerto-m         #+#    #+#              */
/*   Updated: 2026/11/12 16:17:34 by gcerto-m        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <string.h>
#include <stdbool.h>
#include <stdio.h>

bool	test_atoi(int nums[], size_t sz)
{
	char	str[16];

	while (sz != 0)
	{
		bzero(str, 16);
		snprintf(str, 16, "%d", nums[sz - 1]);
		if (ft_atoi(str) != nums[sz - 1])
		{
			ft_putendl_fd("ft_atoi \e[1;91mFAIL\033[0m", 1);
			return (false);
		}
		sz--;
	}
	ft_putendl_fd("ft_atoi \e[1;92mPASS\033[0m", 1);
	return (true);
}

bool	test_itoa(int nums[], size_t sz)
{
	char	str[16];

	while (sz != 0)
	{
		bzero(str, 16);
		snprintf(str, 16, "%d", nums[sz - 1]);
		if (strcmp(ft_itoa(nums[sz - 1]), str) != 0)
		{
			ft_putendl_fd("ft_atoi \e[1;91mFAIL\033[0m", 1);
			return (false);
		}
		sz--;
	}
	ft_putendl_fd("ft_atoi \e[1;92mPASS\033[0m", 1);
	return (true);
}

int	main(void)
{
	int	nums[7];

	nums[0] = 0;
	nums[1] = 42;
	nums[2] = -42;
	nums[3] = 12345;
	nums[4] = -12345;
	nums[5] = 2147483647;
	nums[6] = -2147483648;
	usleep(50000);
	test_atoi(nums, 7);
	usleep(50000);
	test_itoa(nums, 7);
}
