/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_operator.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderison <aderison@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 11:08:11 by aderison          #+#    #+#             */
/*   Updated: 2023/08/22 15:39:48 by aderison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_operator(char *str)
{
	if (*str == '+' || *str == '-' || *str == '/' || *str == '*' || *str == '%')
		return (1);
	return (0);
}
