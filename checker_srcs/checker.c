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

static void	ft_exec_instrs(char *instr, t_stack **stack_A, t_stack **stack_B)
{
	if (!ft_strcmp(instr, "sa"))
		ft_sa(stack_A);
	else if (!ft_strcmp(instr, "sb"))
		ft_sb(stack_B);
	else if (!ft_strcmp(instr, "ss"))
		ft_ss(stack_A, stack_B);
	else if (!ft_strcmp(instr, "pa"))
		ft_pa(stack_A, stack_B);
	else if (!ft_strcmp(instr, "pb"))
		ft_pb(stack_A, stack_B);
	else if (!ft_strcmp(instr, "ra"))
		ft_ra(stack_A);
	else if (!ft_strcmp(instr, "rb"))
		ft_rb(stack_B);
	else if (!ft_strcmp(instr, "rr"))
		ft_rr(stack_A, stack_B);
	else if (!ft_strcmp(instr, "rra"))
		ft_rra(stack_A);
	else if (!ft_strcmp(instr, "rrb"))
		ft_rrb(stack_B);
	else if (!ft_strcmp(instr, "rrr"))
		ft_rrr(stack_A, stack_B);
	else
	{
		ft_putendl_fd("Error", 2);
		exit (0);
	}
}

int			main(int ac, char *av[])
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
					ft_exec_instrs(instr, &stack_A, &stack_B);
					ft_disp_list(&stack_A, &stack_B);
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
