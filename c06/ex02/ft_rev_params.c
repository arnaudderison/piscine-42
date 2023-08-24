/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 14:31:11 by aderison          #+#    #+#             */
/*   Updated: 2023/08/09 13:51:41 by aderison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_mini_printf(char *s, int nl)
{
	while (*s != '\0')
	{
		ft_putchar(*s);
		s++;
	}
	if (nl)
		ft_putchar('\n');
}

int	main(int argc, char **argv)
{
	int	i;

	i = argc - 1;
	while (i > 0)
	{
		ft_mini_printf(argv[i], 1);
		i--;
	}
}
