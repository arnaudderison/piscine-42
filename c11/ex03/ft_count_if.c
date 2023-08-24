/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderison <aderison@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 10:38:41 by aderison          #+#    #+#             */
/*   Updated: 2023/08/21 10:42:33 by aderison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char *))
{
	int count;
	int i;

	if (!f || !tab)
		return (-1);
	count = 0;
	i = 0;
	while (tab[i])
	{
		if (f(tab[i]) != 0)
			count++;
	}
	return (count);
}