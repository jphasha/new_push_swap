#include "../push_swap.h"

void        ft_sort_algo(t_stack **stack_A, t_stack **stack_B)
{
    while ((ft_find_min(stack_A) >= 1) && (!ft_is_sorted(stack_A)))
	{
		if ((ft_find_min(stack_A) == 1) && !ft_is_sorted(stack_A))
		{
			ft_pb(stack_A, stack_B);
			ft_putendl("pb");
		}

        else if (ft_find_min(stack_A) == 2)
        {
            ft_sa(stack_A);
            ft_putendl("sa");
        }
        

        else if (ft_find_midpos(stack_A) >= ft_find_min(stack_A))
		{
			ft_ra(stack_A);
			ft_putendl("ra");
		}

		else if (ft_find_midpos(stack_A) <= ft_find_min(stack_A))
		{
			ft_rra(stack_A);
			ft_putendl("rra");
		}
	}

	while (stack_B[0])
	{
		ft_pa(stack_A, stack_B);
		ft_putendl("pa");
	}
}