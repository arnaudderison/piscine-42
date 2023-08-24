/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderison <aderison@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 20:12:24 by aderison          #+#    #+#             */
/*   Updated: 2023/08/19 18:20:58 by aderison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	ft_is_charset(char c, char *charset)
{
	if (!charset)
		return (0);
	while (*charset)
	{
		if (*charset == c)
			return (1);
		charset++;
	}
	return (0);
}

int	ft_tab_count(char *str, char *charset)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str && ft_is_charset(*str, charset))
			str++;
		if (*str && !ft_is_charset(*str, charset))
			count++;
		while (*str && !ft_is_charset(*str, charset))
			str++;
	}
	return (count);
}

char	*ft_char_dup(char *start, char *charset)
{
	char	*copy;
	int		j;

	j = 0;
	while (start[j] != '\0' && !ft_is_charset(start[j], charset))
		j++;
	copy = (char *)malloc(sizeof(char) * (j + 1));
	if (!copy)
		return (0);
	j = 0;
	while (start[j] && !ft_is_charset(start[j], charset))
	{
		copy[j] = start[j];
		j++;
	}
	copy[j] = '\0';
	return (copy);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		i;

	if (!str || !charset)
		return (0);
	result = (char **)malloc(sizeof(char *) * (ft_tab_count(str, charset) + 1));
	if (!result)
		return (0);
	i = 0;
	while (*str)
	{
		while (*str && ft_is_charset(*str, charset))
			str++;
		if (*str && !ft_is_charset(*str, charset))
		{
			result[i] = ft_char_dup(str, charset);
			if (!result)
				return (0);
			i++;
		}
		while (*str && !ft_is_charset(*str, charset))
			str++;
	}
	result[i] = 0;
	return (result);
}
