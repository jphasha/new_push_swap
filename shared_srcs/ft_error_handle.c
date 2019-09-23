/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_handle.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphasha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 11:39:25 by jphasha           #+#    #+#             */
/*   Updated: 2019/09/23 12:06:03 by jphasha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int			ft_all_digits(char **str)
{
	int		i;
	int		j;
	int		dg;

	i = 0;
	dg = 1;
	while (str[i] != NULL)
	{
		j = 0;
		if ((str[i][j] == '-' || str[i][j] == '+') && str[i][j + 1] != '\0')
			j++;
		while (str[i][j] != '\0')
		{
			if (!ft_isdigit(str[i][j]))
				dg = 0;
			j++;
		}
		i++;
	}
	return (dg);
}

int		ft_error_handle(char **argv)
{
	int	err;

	err = 1;
	if (!ft_all_digits(argv))
		err = 0;
	return (err);
}
