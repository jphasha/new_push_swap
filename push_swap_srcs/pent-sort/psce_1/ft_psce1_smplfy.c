#include "../../../push_swap.h"

void		ft_psce1_smplfy1(t_stack **head_a, t_stack **head_b)
{
	ft_pb(head_a, head_b);
	ft_putendl("pb");
	ft_sort_tri(head_a);
	ft_pa(head_a, head_b);
	ft_putendl("pa");
	ft_ra(head_a);
	ft_putendl("ra");
	ft_pa(head_a, head_b);
	ft_putendl("pa");
}

void		ft_psce1_smplfy2(t_stack **head_a, t_stack **head_b)
{
	ft_pb(head_a, head_b);
	ft_putendl("pb");
	ft_sort_tri(head_a);
	ft_pa(head_a, head_b);
	ft_putendl("pa");
	ft_pa(head_a, head_b);
	ft_putendl("pa");
	ft_ra(head_a);
	ft_putendl("ra");
}