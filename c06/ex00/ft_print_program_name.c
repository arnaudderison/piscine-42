/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderison <aderison@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 12:41:23 by aderison          #+#    #+#             */
/*   Updated: 2023/08/10 22:20:11 by aderison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc > 0)
	{
		while (*argv[0])
			write(1, argv[0]++, 1);
		write(1, "\n", 1);
	}
	return (0);
}
