/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_man.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphasha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 08:29:24 by jphasha           #+#    #+#             */
/*   Updated: 2019/09/17 09:14:36 by jphasha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ft_new_node(int data, t_stack **head)
{
	t_stack	*node;

	if (!(node = (t_stack *)ft_memalloc(sizeof(t_stack))))
		return ;
	node->data = data;
	node->next = NULL;
	*head = node;
}

void		ft_push_top(int data, t_stack **head)
{
	t_stack	*lnk;

	lnk = NULL;
	if (!head)
		ft_new_node(data, head);
	else
	{
		ft_new_node(data, &lnk);
		lnk->next = *head;
		*head = lnk;
	}
}

/*void		ft_push_bottom(int data, t_stack **head)
{
}*/
