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

static int		ft_stack_size(t_stack **stack)
{
	t_stack		*iter;
	int			size;

	size = 0;
	iter = *stack;
	while (iter)
	{
		iter = iter->next;
		size++;
	}
	return (size);
}

int				ft_find_min(t_stack **stack)
{
	t_stack		*iter;
	t_stack		*hldr;
	int			i;
	int			size;
	int			pos;

	iter = *stack;
	hldr = iter;
	i = 1;
	pos = 1;
	size = ft_stack_size(stack);
	while (size >= i && iter->next)
	{
		if (iter->data < iter->next->data && iter->data < hldr->data)
		{
			hldr = iter;
			pos = i;
		}
		iter = iter->next;
		i++;
	}
	if (!iter->next && iter->data < hldr->data)
		pos = i;
	return (pos);
}

static void		ft_sort_mechanism(char **args, t_stack **stack_A, t_stack **stack_B)
{
	if (args[0])
	{
		if (ft_error_handle(args))
		{
			ft_build_stack(&stack_A, args);
			if (!ft_is_sorted(&stack_A) || stack_B)
			{
				while (ft_find_min(&stack_A) > 1)
				{
					ft_ra(&stack_A);
					ft_putendl("ra");
					if ((ft_find_min(&stack_A) == 1) && !ft_is_sorted(&stack_A))
					{
						ft_pb(&stack_A, &stack_B);
						ft_putendl("pb");
					}
				}
				while (stack_B)
				{
					ft_pa(&stack_A, &stack_B);
					ft_putendl("pa");
				}
					
			}
			ft_disp_list(&stack_A, &stack_B);
			ft_srtd_stck(&stack_A, &stack_B);
			ft_del_stack(&stack_A, &stack_B);
		}
	}
}

int				main(int ac, char *av[])
{
	if (ac > 1)
	{
		t_stack	*stack_A;
		t_stack	*stack_B;
		char	**args;

		stack_A = NULL;
		stack_B = NULL;
		args = ft_get_args(av, ac);
		ft_sort_mechanism(args, &stack_A, &stack_B);
		ft_loop_memdel((void **)args);
	}
	return (0);
}
