/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prnt_arr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphasha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 14:38:43 by jphasha           #+#    #+#             */
/*   Updated: 2019/09/20 15:31:08 by jphasha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putendl_arr(char **arr)
{
	int		i;

	i = 0;
	while (arr[i])
	{
		ft_putendl(arr[i]);
		i++;
	}
}

void		ft_putnbr_arr(int *num_arr, int arr_size)
{
	int		i;

	i = 0;
	while (i < arr_size)
	{
		ft_putnbr(num_arr[i]);
		ft_putchar('\n');
		i++;
	}
}
