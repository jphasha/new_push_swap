/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphasha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/24 09:37:24 by jphasha           #+#    #+#             */
/*   Updated: 2019/08/24 11:58:40 by jphasha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*lst_ref;
	t_list	*lst_ref_iter;

	lst_ref = *alst;
	while (lst_ref)
	{
		lst_ref_iter = lst_ref->next;
		del(lst_ref->content, lst_ref->content_size);
		free(lst_ref);
		lst_ref = lst_ref_iter;
	}
	*alst = NULL;
}
