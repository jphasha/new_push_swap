/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_size.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphasha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 12:18:19 by jphasha           #+#    #+#             */
/*   Updated: 2019/09/20 15:30:21 by jphasha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "libft.h"

int			ft_array_size(int *array)
{
	int		size;

	size = 0;
	//this function gives off highly unreliable data.
	//especially data at sizeof(array);
	//so let's avoid using it until i can debug it.
	if (sizeof(array[0]) < 1)
		return (0);
	size = sizeof(array) / sizeof(array[0]);
	return (size);
}*/
