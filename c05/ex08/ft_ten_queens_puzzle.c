/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 11:10:38 by aderison          #+#    #+#             */
/*   Updated: 2023/08/07 16:52:30 by aderison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_abs(int n)
{
	if (n < 0)
		n = -n;
	return (n);
}

void	ft_print_position(int *queens)
{
	int		i;
	char	outp;

	i = -1;
	while (++i < 10)
	{
		outp = queens[i] + '0';
		write(1, &outp, 1);
	}
	write(1, "\n", 1);
}

int	ft_can_play(int *queens, int desable_row, int active_case)
{
	int	prec_col;

	prec_col = 0;
	while (prec_col < desable_row)
	{
		if (queens[prec_col] == active_case
			|| ft_abs(queens[prec_col] - active_case)
			== ft_abs(prec_col - desable_row))
			return (0);
		prec_col++;
	}
	return (1);
}

int	ft_queens_rec(int *queens, int row)
{
	int	i;
	int	count;

	count = 0;
	i = -1;
	while (++i < 10)
	{
		if (ft_can_play(queens, row, i))
		{
			queens[row] = i;
			if (row == 9)
			{
				ft_print_position(queens);
				count++;
			}
			else
				count += ft_queens_rec(queens, row + 1);
		}
	}
	return (count);
}

int	ft_ten_queens_puzzle(void)
{
	int	queens[10];

	return (ft_queens_rec(queens, 0));
}
