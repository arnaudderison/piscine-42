/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 16:51:30 by aderison          #+#    #+#             */
/*   Updated: 2023/08/06 10:48:47 by aderison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	puthex(unsigned char n)
{
	char	*hex_digits;

	hex_digits = "0123456789abcdef";
	write(1, &hex_digits[n / 16], 1);
	write(1, &hex_digits[n % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str >= 32 && *str <= 126)
			write(1, str, 1);
		else
		{
			write(1, "\\", 1);
			puthex((unsigned char)*str);
		}
		str++;
	}
}
