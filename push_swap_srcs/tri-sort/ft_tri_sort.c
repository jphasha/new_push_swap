#include "../../push_swap.h"

void			ft_sort_tri(t_stack **head)
{
	t_stack	    *hldr;
	int			pos_min;
	int			pos_max;

	hldr = *head;
	pos_min = ft_find_min(&hldr);
	pos_max = ft_find_max(&hldr);
	if (pos_min == 1 && pos_max == 3)
		return ;
	else if (pos_min == 1 && pos_max == 2)
		ft_tri_exe_1_2(head);
	else if (pos_min == 2 && pos_max == 3)
		ft_tri_exe_2_3(head);
	else if (pos_min == 2 && pos_max == 1)
		ft_tri_exe_2_1(head);
	else if (pos_min == 3 && pos_max == 1)
		ft_tri_exe_3_1(head);
	else if (pos_min == 3 && pos_max == 2)
		ft_tri_exe_3_2(head);
}