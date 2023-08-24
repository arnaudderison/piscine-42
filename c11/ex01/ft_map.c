/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderison <aderison@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 04:24:06 by aderison          #+#    #+#             */
/*   Updated: 2023/08/20 04:40:11 by aderison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*ret_tab;
	int	i;

	ret_tab = (int *)malloc(sizeof(int) * length);
	if (!tab || !f || !ret_tab)
		return (0);
	i = -1;
	while (++i < length)
		ret_tab[i] = f(tab[i]);
	return (ret_tab);
}
