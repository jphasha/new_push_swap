/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_man.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphasha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 13:40:07 by jphasha           #+#    #+#             */
/*   Updated: 2019/09/23 11:13:38 by jphasha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <stdio.h>

char		**ft_get_args(char **argv, t_stack **hd_a, int argc)
{
	t_stack	*hldr;
	char	**arg_hldr;
	int		i;
	int		j;

	hldr = *hd_a;
	arg_hldr = NULL;
	i = 1;
	j = 0;
	if (!argv[1] && argv[0])
		return (NULL);
	else if (argv[1] && !argv[2])
		arg_hldr = ft_strsplit(argv[1], ' ');
	else
	{
		if (!(arg_hldr = (char **)ft_memalloc(sizeof(char *) * (argc))))
			return (NULL);
		while (argv[i] != NULL)
		{
			arg_hldr[j] = ft_strdup(argv[i]);
			i++;
			j++;
		}
		arg_hldr[j] = NULL;
	}
	return (arg_hldr);
}
