/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstlast.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gcerto-m <gcerto-m@student.42porto.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/09 12:47:56 by gcerto-m         #+#    #+#              */
/*   Updated: 2026/11/09 13:00:16 by gcerto-m        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft.h"

int	main(void)
{
	t_list	*list;
	t_list	*last;

	list = ft_lstnew("Hello World");
	last = ft_lstlast(list);
	printf("Known Last: %p\nft_lstlast(x): %p\nResult: ", list, last);
	if (list == last)
		printf("\e[1;92mPASSED\033[0m\n");
	else
		printf("\e[1;91mFAILED\033[0m\n");
}
