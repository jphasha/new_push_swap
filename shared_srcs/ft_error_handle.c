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

static int				ft_all_digits(char **str)
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

static int				ft_double(char **args)
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

static int				ft_bigger_int(char **args)
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

int				ft_valid_instr(char *instr)
{
	int	vinst;
	int	i;
	char **valid_instrs;
	
	vinst = 1;
	i = 0;
	valid_instrs = (char **)malloc(sizeof(char *) * 11 + 1);
	valid_instrs[0] = "sa";
	valid_instrs[1] = "sb";
	valid_instrs[2] = "ss";
	valid_instrs[3] = "pa";
	valid_instrs[4] = "pb";
	valid_instrs[5] = "ra";
	valid_instrs[6] = "rb";
	valid_instrs[7] = "rr";
	valid_instrs[8] = "rra";
	valid_instrs[9] = "rrb";
	valid_instrs[10] = "rrr";
	valid_instrs[11] = NULL;
	while (valid_instrs[i])
	{
		if (instr == valid_instrs[i])
		{
			ft_putendl("valid instr");
		}
		i++;
	}
	ft_putendl(instr);
	return (vinst);
}

int				ft_error_handle(char **args)
{
	int			err;

	err = 1;
	if (!ft_all_digits(args) || !ft_double(args) || !ft_bigger_int(args))
		err = 0;
	return (err);
}
