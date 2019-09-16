/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_selection_sort.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphasha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 13:20:10 by jphasha           #+#    #+#             */
/*   Updated: 2019/07/15 16:02:11 by jphasha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_selection_sort(int *num_arr, int arr_size)
{
	int	i;
	int	cur_min;

	i = 0;
	cur_min = 0;
	if (arr_size <= 1)
	{
		return ;
	}
	while (arr_size > i && num_arr[i] > 0)
	{
		if (num_arr[i] < num_arr[cur_min])
		{
			ft_swap(&num_arr[i], &num_arr[cur_min]);
		}
		if (i + 1 == arr_size)
		{
			i = cur_min;
			cur_min++;
		}
		i++;
	}
}
