/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_sort_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphasha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 13:44:39 by jphasha           #+#    #+#             */
/*   Updated: 2019/07/19 14:23:04 by jphasha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				int_sort_tab(int *tab, unsigned int size)
{
	unsigned int	i;
	unsigned int	srtd_i;

	i = 0;
	srtd_i = 0;
	while (i < size)
	{
		if (tab[i] <= tab[srtd_i])
		{
			ft_swap(&tab[i], &tab[srtd_i]);
		}
		if (i + 1 == size)
		{
			srtd_i++;
			i = srtd_i;
		}
		i++;
	}
}
