/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strtrim.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gcerto-m <gcerto-m@student.42porto.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/04 15:14:12 by gcerto-m         #+#    #+#              */
/*   Updated: 2026/11/04 15:24:01 by gcerto-m        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

static char	contains_char(char *str, char c)
{
	while (*str != '\0')
	{
		if (*str == c)
			return (1);
	}
	return (0);
}

/// @brief 
/// @param s1 
/// @param set 
/// @return 
char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	len;
	unsigned int	index_after;
	unsigned int	index_before;

	len = 0;
	index_after = 0;
	while (contains_char(set, s1[index_after]))
		index_after++;
	while (contains_char(set, s1[index_before]))
		index_before--;
	while (s1[index_after)
			while (!contains_char(set, s1[index]))
		{
		}
}
