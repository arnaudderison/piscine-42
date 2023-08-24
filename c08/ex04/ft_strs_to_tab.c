/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderison <aderison@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 11:10:35 by aderison          #+#    #+#             */
/*   Updated: 2023/08/22 12:31:27 by aderison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcopy(char *str)
{
	char	*copy;
	char	*start;

	if (!str)
		return (NULL);
	copy = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (!copy)
		return (NULL);
	start = copy;
	while (*str)
		*copy++ = *str++;
	*copy = '\0';
	return (start);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*tab;

	tab = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (ac < 0 || !av || !tab)
		return (NULL);
	i = -1;
	while (++i < ac && av[i])
	{
		tab[i].str = ft_strcopy(av[i]);
		if (!tab[i].str)
		{
			while (i >= 0)
			{
				free(tab[i].str);
				i--;
			}
			free(tab);
			return (0);
		}
		tab[i].size = ft_strlen(av[i]);
		tab[i].copy = ft_strcopy(av[i]);
	}
	tab[i].str = 0;
	return (tab);
}
