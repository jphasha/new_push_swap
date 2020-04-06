#include "../../push_swap.h"

int				ft_find_max(t_stack **head)
{
	t_stack 	*iter;
	t_stack	    *hldr;
	int			i;
	int			size;
	int			pos;

	iter = *head;
	hldr = iter;
	i = 1;
	pos = 1;
	size = ft_stack_size(head);
	while (size >= i && iter->next)
	{
		if (iter->data > iter->next->data && iter->data > hldr->data)
		{
			pos = i;
			hldr = iter;
		}
		iter = iter->next;
		i++;
	}
	if (!iter->next && iter->data > hldr->data)
		pos = i;
	return (pos);
}