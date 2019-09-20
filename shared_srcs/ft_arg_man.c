/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_man.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphasha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 13:40:07 by jphasha           #+#    #+#             */
/*   Updated: 2019/09/20 17:09:24 by jphasha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void		ft_get_args(char **argv, t_stack **hd_a)
{
	t_stack	*hldr;
	char	**arg_hldr;
	int		i;
	int		j;

	hldr = *hd_a;
	arg_hldr = NULL;
	i = 1;
	j = 0;
	if (argv[2] == NULL)
		arg_hldr = ft_strsplit(argv[1], ' ');
	else
	{
		arg_hldr = 
		while (argv[i] != NULL)
		{
			arg_hldr[j] = argv[i];
			j++;
			i++;
		}
	}
	if (arg_hldr)
	{
		ft_putendl_arr(arg_hldr);
		ft_loop_memdel((void **)arg_hldr);
		hldr = NULL;
	}
}
