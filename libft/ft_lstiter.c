/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphasha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/24 15:48:41 by jphasha           #+#    #+#             */
/*   Updated: 2019/08/24 16:17:39 by jphasha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list	*lst_i;

	if (!lst || !f)
		return ;
	lst_i = lst;
	while (lst_i)
	{
		f(lst_i);
		lst_i = lst_i->next;
	}
}
