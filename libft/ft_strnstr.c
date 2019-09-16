/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphasha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 15:49:32 by jphasha           #+#    #+#             */
/*   Updated: 2019/07/13 00:37:35 by jphasha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *xstr, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (xstr[i] == '\0')
	{
		return ((char *)(str));
	}
	while (str[i] != '\0')
	{
		j = 0;
		if (str[i] == xstr[j])
		{
			while (str[i + j] == xstr[j] && (i + ft_strlen(xstr) <= len))
			{
				if (xstr[j + 1] == '\0')
				{
					return ((char *)(str + i));
				}
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
