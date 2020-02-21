/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphasha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 16:05:06 by jphasha           #+#    #+#             */
/*   Updated: 2019/09/17 08:17:03 by jphasha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int		main(int ac, char *av[])
{
	if (ac > 1)
	{
		t_stack	*stack_A;
		t_stack	*stack_B;
		char	**args;

		stack_A = NULL;
		stack_B = NULL;
		args = ft_get_args(av, ac);
		if (args[0])
		{
			if (ft_error_handle(args))
			{
				ft_build_stack(&stack_A, args);
				ft_disp_list(&stack_A, &stack_B);
				ft_srtd_stck(&stack_A, &stack_B);
			}
		}
		ft_loop_memdel((void **)args);
	}
	return (0);
}
