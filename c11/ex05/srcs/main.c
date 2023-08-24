/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderison <aderison@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 11:11:59 by aderison          #+#    #+#             */
/*   Updated: 2023/08/22 15:38:45 by aderison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	main(int argc, char **argv)
{
	long int	(*fct[5])(long int, long int);

	fct[0] = ft_plus;
	fct[1] = ft_months;
	fct[2] = ft_mult;
	fct[3] = ft_div;
	fct[4] = ft_mod;
	if (argc != 4)
		return (0);
	if (!ft_is_operator(argv[2]))
		ft_putstr("0");
	if (argv[2][0] == '+')
		ft_print_result(fct[0](ft_atoi(argv[1]), ft_atoi(argv[3])));
	if (argv[2][0] == '-')
		ft_print_result(fct[1](ft_atoi(argv[1]), ft_atoi(argv[3])));
	if (*argv[2] == '*')
		ft_print_result(fct[2](ft_atoi(argv[1]), ft_atoi(argv[3])));
	if (argv[2][0] == '/')
		ft_print_result(fct[3](ft_atoi(argv[1]), ft_atoi(argv[3])));
	if (argv[2][0] == '%')
		ft_print_result(fct[4](ft_atoi(argv[1]), ft_atoi(argv[3])));
	return (0);
}
