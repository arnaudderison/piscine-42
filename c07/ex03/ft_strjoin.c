/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderison <aderison@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 19:04:17 by aderison          #+#    #+#             */
/*   Updated: 2023/08/13 21:03:52 by aderison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

int	ft_strlen_tab(char **tab, int size)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	count = 0;
	if (!tab)
		return (0);
	while (i < size)
	{
		if (tab[i])
		{
			j = -1;
			while (tab[i][++j] != '\0')
				count++;
			i++;
		}
	}
	return (count);
}

void	write_on_ptr(char **strs, int size, char *sep, char *nstr)
{
	int	i;
	int	j;
	int	k;

	i = -1;
	j = -1;
	k = -1;
	while (++i < size)
	{
		j = -1;
		k = -1;
		while (strs[i][++j] != '\0')
		{
			*nstr = strs[i][j];
			nstr++;
		}
		while (sep[++k] && i < size - 1)
		{
			*nstr = sep[k];
			nstr++;
		}
	}
	*nstr = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		nstrlen;
	char	*nstr;
	int		seplen;
	char	*back;

	if (size == 0)
		return (0);
	back = NULL;
	seplen = ft_strlen(sep) * size - 1;
	nstrlen = ft_strlen_tab(strs, size);
	nstr = (char *)malloc(sizeof(char) * nstrlen + sizeof(char) * seplen + 1);
	back = nstr;
	if (!nstr || !back || !sep || !strs)
		return (NULL);
	if (size == 0)
		return ("");
	write_on_ptr(strs, size, sep, nstr);
	return (back);
}
