/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphasha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 16:01:03 by jphasha           #+#    #+#             */
/*   Updated: 2019/09/23 15:42:24 by jphasha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int		main(int ac, char *av[])
{
	if (ac == 1)
		return (0);
	t_stack	*stack_A;
	t_stack	*stack_B;
	char	**args;
	char	*instr;

	stack_A = NULL;
	stack_B = NULL;
	instr = NULL;
	args = ft_get_args(av, &stack_A, ac);
	if (args[0])
	{
		if (ft_error_handle(args))
		{
			while (get_next_line(0, &instr))
			{
				if (ft_valid_instr(instr))
				{
					/* lt's sort according to the instructions
					but for now let us fix the 'ft_valid_instr first' */
					ft_putendl("yay! you have a working instruction");
				}

				else
				{
					ft_putendl_fd("Error", 2);
				}
			}
		}

		else
		{
			ft_putendl_fd("Error", 2);
		}
	}
	ft_loop_memdel((void **)args);
	ft_del_stack(&stack_A, &stack_B);
	return (0);
}
