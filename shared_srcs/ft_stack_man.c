/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_man.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphasha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 08:29:24 by jphasha           #+#    #+#             */
/*   Updated: 2019/09/18 17:22:24 by jphasha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void			ft_new_node(int data, t_stack **head)
{
	t_stack		*node;

	if (!(node = (t_stack *)ft_memalloc(sizeof(t_stack))))
		return ;
	node->data = data;
	node->next = NULL;
	*head = node;
}

void			ft_deltop_node(t_stack **head)
{
	t_stack		*holder;

	holder = *head;
	if (holder == NULL)
		return ;
	holder = holder->next;
	ft_memdel((void **)head);
	*head = holder;
}

void			ft_delbot_node(t_stack **head)
{
	t_stack		*hldr;

	hldr = *head;
	if (hldr == NULL)
		return ;
	else if (hldr->next == NULL)
	{
		free(*head);
		*head = NULL;
	}
	while (hldr->next->next != NULL)
		hldr = hldr->next;
	free(hldr->next);
	hldr->next = NULL;
}

void			ft_push_top(int data, t_stack **head)
{
	t_stack		*lnk;

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

void			ft_push_bottom(int data, t_stack **head)
{
	t_stack		*lnk;

	lnk = *head;
	if (!*head)
	{
		ft_new_node(data, head);
		return ;
	}
	while (lnk->next != NULL)
		lnk = lnk->next;
	if (!(lnk->next = (t_stack *)ft_memalloc(sizeof(t_stack))))
		return ;
	lnk->next->data = data;
	lnk->next->next = NULL;
}
