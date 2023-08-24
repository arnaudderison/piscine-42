/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_result.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderison <aderison@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 14:00:18 by aderison          #+#    #+#             */
/*   Updated: 2023/08/22 14:33:48 by aderison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_print_result(long int nb)
{
	if (nb == ERROR)
		return ;
	ft_putstr(ft_itoa(nb));
}
