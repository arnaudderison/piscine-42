/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderison <aderison@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 13:39:20 by aderison          #+#    #+#             */
/*   Updated: 2023/08/22 15:23:20 by aderison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_len(long int nb)
{
	int					len;
	unsigned long int	n;

	len = 0;
	if (nb < 0)
	{
		n = (nb * -1);
		len++;
	}
	else
		n = nb;
	while (n > 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(long int nb)
{
	char	*ret;
	int		len;

	len = ft_len(nb);
	ret = (char *)malloc(sizeof(char) * (len + 1));
	len--;
	if (!ret)
		return (0);
	ret[len] = '\0';
	if (len == 0)
		ret[len] = '0';
	if (nb < 0)
	{
		ret[0] = '-';
		nb *= -1;
	}
	while (nb > 0)
	{
		ret[len] = '0' + (nb % 10);
		len--;
		nb = nb / 10;
	}
	return (ret);
}
