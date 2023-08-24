/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 13:01:35 by aderison          #+#    #+#             */
/*   Updated: 2023/08/06 17:14:06 by aderison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*ptr;
	unsigned int	i;

	if (!dest || !src)
		return (NULL);
	ptr = dest;
	while (*ptr)
		ptr++;
	i = 0;
	while (src[i] && i < nb)
	{
		*ptr = src[i];
		ptr++;
		i++;
	}
	*ptr = '\0';
	return (dest);
}
