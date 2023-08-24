/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 19:40:18 by aderison          #+#    #+#             */
/*   Updated: 2023/08/06 03:08:17 by aderison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	max_dest_len;
	unsigned int	i;

	if (dest == NULL && src == NULL)
		return (0);
	max_dest_len = 0;
	i = 0;
	while (src[max_dest_len] != 0)
	{
		max_dest_len++;
	}
	while (i + 1 < size && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (size > 0)
	{
		dest[i] = '\0';
	}
	return (max_dest_len);
}
