/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calculate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderison <aderison@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 11:38:42 by aderison          #+#    #+#             */
/*   Updated: 2023/08/22 15:40:08 by aderison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

long int	ft_plus(long int nb1, long int nb2)
{
	return ((nb1 + nb2));
}

long int	ft_months(long int nb1, long int nb2)
{
	return ((long int)(nb1 - nb2));
}

long int	ft_mult(long int nb1, long int nb2)
{
	return ((long int)(nb1 * nb2));
}

long int	ft_div(long int nb1, long int nb2)
{
	if (nb2 == 0)
	{
		ft_putstr("Stop : division by zero");
		return (ERROR);
	}
	return ((long int)(nb1 / nb2));
}

long int	ft_mod(long int nb1, long int nb2)
{
	if (nb2 == 0)
	{
		ft_putstr("Stop : modulo by zero");
		return (ERROR);
	}
	return ((long int)(nb1 % nb2));
}
