/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_man.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphasha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 13:40:07 by jphasha           #+#    #+#             */
/*   Updated: 2019/09/23 14:32:09 by jphasha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ft_sto_args(char **ah, char **av)
{
	int		i;
	int		j;

	i = 1;
	j = 0;
	while (av[i] != NULL)
	{
		ah[j] = ft_strdup(av[i]);
		i++;
		j++;
	}
	ah[j] = NULL;
}

char		**ft_get_args(char **argv, int argc)
{
	char	**arg_hldr;

	arg_hldr = NULL;
	if (!argv[1] && argv[0])
		return (NULL);
	else if (argv[1] && !argv[2])
		arg_hldr = ft_strsplit(argv[1], ' ');
	else
	{
		if (!(arg_hldr = (char **)ft_memalloc(sizeof(char *) * (argc))))
			return (NULL);
		ft_sto_args(arg_hldr, argv);
	}

	return (arg_hldr);
}
