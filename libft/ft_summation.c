/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_summation.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphasha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 07:26:31 by jphasha           #+#    #+#             */
/*   Updated: 2019/07/17 07:34:14 by jphasha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_summation(int arr_size, int *arr)
{
	int	i;
	int	sum;

	i = 0;
	sum = 0;
	while (i < arr_size)
	{
		sum = sum + arr[i];
		i++;
	}
	return (sum);
}
