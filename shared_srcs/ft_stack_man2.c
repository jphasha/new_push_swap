/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_man2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphasha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 18:23:00 by jphasha           #+#    #+#             */
/*   Updated: 2019/09/17 18:45:59 by jphasha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void			ft_disp_list(t_stack *hd_a, t_stack *hd_b)
{
	t_stack		*disp_list_a;
	t_stack		*disp_list_b;

	disp_list_a = hd_a;
	disp_list_b = hd_b;
	if (hd_a != NULL)
		ft_putendl("stack A:");
	else
		ft_putendl("stack A: Empty");
	while (disp_list_a != NULL)
	{
		ft_putnbr(disp_list_a->data);
		ft_putchar('\n');
		disp_list_a = disp_list_a->next;
	}
	if (hd_b != NULL)
		ft_putendl("stack B:");
	else
		ft_putendl("stack B: Empty");
	while (disp_list_b != NULL)
	{
		ft_putnbr(disp_list_b->data);
		ft_putchar('\n');
		disp_list_b = disp_list_b->next;
	}
}
