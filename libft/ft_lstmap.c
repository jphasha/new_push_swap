/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphasha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/24 16:25:56 by jphasha           #+#    #+#             */
/*   Updated: 2019/09/01 12:24:57 by jphasha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*map_lnk;
	t_list	*map_lnk_i;

	if (!lst || !f)
		return (NULL);
	map_lnk_i = f(lst);
	map_lnk = map_lnk_i;
	while (lst->next)
	{
		lst = lst->next;
		if (!(map_lnk_i->next = f(lst)))
		{
			free(map_lnk_i->next);
			return (NULL);
		}
		map_lnk_i = map_lnk_i->next;
	}
	return (map_lnk);
}
