/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_handle.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphasha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 11:39:25 by jphasha           #+#    #+#             */
/*   Updated: 2019/09/23 14:17:09 by jphasha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int				ft_all_digits(char **str)
{
	int			i;
	int			j;
	int			dg;

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

int				ft_double(char **args)
{
	int			i;
	int			j;
	int			dub;
	int			diff;

	i = 0;
	dub = 1;
	diff = 1;
	while (args[i] != NULL)
	{
		j = i + 1;
		while (args[j] != NULL)
		{
			diff = ft_strcmp(args[i], args[j]);
			if (diff == 0)
				dub = 0;
			j++;
		}
		i++;
	}
	return (dub);
}

int				ft_bigger_int(char **args)
{
	int			bint;
	long long	nbr;
	int			i;

	bint = 1;
	i = 0;
	while (args[i] != NULL)
	{
		nbr = ft_atoll(args[i]);
		if (nbr < -2147483648 || nbr > 2147483647)
			bint = 0;
		i++;
	}
	return (bint);
}

int				ft_error_handle(char **args)
{
	int			err;

	err = 1;
	if (!ft_all_digits(args) || !ft_double(args) || !ft_bigger_int(args))
		err = 0;
	return (err);
}
