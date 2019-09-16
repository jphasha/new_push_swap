/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_word_cmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphasha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 18:19:43 by jphasha           #+#    #+#             */
/*   Updated: 2019/08/27 16:38:15 by jphasha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_word_cmp(char *str)
{
	int				diff;
	int				i;
	int				j;
	char			**str_chnks;
	char const		*str_c;

	i = 0;
	str_c = (char const *)str;
	str_chnks = ft_strsplit(str_c, ' ');
	while (str_chnks[i] != NULL)
	{
		j = i + 1;
		while (str_chnks[j] != NULL)
		{
			diff = ft_strcmp(str_chnks[i], str_chnks[j]);
			if (diff == 0)
				return (diff);
			j++;
		}
		i++;
	}
	ft_memdel((void **)str_chnks);
	return (diff);
}
