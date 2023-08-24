/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 11:33:51 by aderison          #+#    #+#             */
/*   Updated: 2023/08/06 10:49:07 by aderison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_alpha_numeric(char c)
{
	return ((c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'));
}

char	ft_to_upper(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - ('a' - 'A'));
	}
	return (c);
}

char	ft_to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c + ('a' - 'A'));
	}
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	char	*original_str;
	int		capitalize_next;

	original_str = NULL;
	if (str == NULL && original_str == NULL)
		return (NULL);
	original_str = str;
	capitalize_next = 1;
	while (*str != '\0')
	{
		if (ft_is_alpha_numeric(*str))
		{
			if (capitalize_next)
			{
				*str = ft_to_upper(*str);
				capitalize_next = 0;
			}
			else
				*str = ft_to_lower(*str);
		}
		else
			capitalize_next = 1;
		str++;
	}
	return (original_str);
}
