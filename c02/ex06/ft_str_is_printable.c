/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 09:53:29 by aderison          #+#    #+#             */
/*   Updated: 2023/08/06 03:26:49 by aderison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(const char *str)
{
	if (str == NULL)
		return (0);
	while (*str != '\0')
	{
		if (*str < ' ' || *str > '~')
		{
			return (0);
		}
		str++;
	}
	return (1);
}
