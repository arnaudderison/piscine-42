/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderison <aderison@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 11:01:29 by aderison          #+#    #+#             */
/*   Updated: 2023/08/22 15:33:00 by aderison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# define ERROR -4294967296

// Utils
void		ft_putstr(char *str);
int			ft_is_operator(char *str);
int			ft_atoi(char *str);
char		*ft_itoa(long int nb);
void		ft_print_result(long int nb);

// operator
long int	ft_plus(long int nb1, long int nb2);
long int	ft_months(long int nb1, long int nb2);
long int	ft_mult(long int nb1, long int nb2);
long int	ft_div(long int nb1, long int nb2);
long int	ft_mod(long int nb1, long int nb2);

#endif