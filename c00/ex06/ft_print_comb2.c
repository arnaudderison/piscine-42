/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 04:19:15 by aderison          #+#    #+#             */
/*   Updated: 2023/08/02 20:11:41 by aderison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

void	ft_print_comb2(void);
void	ft_num_to_text(int a, int b, bool last);
void	ft_print_char(char c);

void	ft_print_char(char c)
{
	write(1, &c, 1);
}

void	ft_num_to_text(int a, int b, bool last)
{
	ft_print_char(48 + a / 10);
	ft_print_char(48 + a % 10);
	ft_print_char(' ');
	ft_print_char(48 + b / 10);
	ft_print_char(48 + b % 10);
	if (last)
	{
		ft_print_char(',');
		ft_print_char(' ');
	}
}

void	ft_print_comb2(void)
{
	int		a;
	int		b;
	bool	last;

	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			last = !(a == 98 && b == 99);
			ft_num_to_text(a, b, last);
			b++;
		}
		a++;
	}
}
