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

char		**ft_get_args(char **argv, t_stack **hd_a, int argc)
{
	t_stack	*hldr;
	char	**arg_hldr;

	hldr = *hd_a;
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

	/* i'm just printing here to shut up my editor. as soon as i remember why \
	 i created this variable then i will use it accordingly. */
	ft_disp_list(&hldr, &hldr);
	return (arg_hldr);
}
