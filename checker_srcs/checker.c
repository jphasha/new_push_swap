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
	// int		i;
	t_stack	*stack_A;
	t_stack	*stack_B;
	char	**args;

	stack_A = NULL;
	stack_B = NULL;
	// i = 0;
	args = ft_get_args(av, &stack_A, ac);
	if (ft_error_handle(args))
	{
		ft_putendl("we have no errors");
	}

	else
	{
		ft_putendl("your stack contains some unwanted stuff");
	}
	ft_loop_memdel((void **)args);
	ft_del_stack(&stack_A, &stack_B);
	return (0);
}
