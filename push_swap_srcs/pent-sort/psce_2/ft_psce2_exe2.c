#include "../../../push_swap.h"

void			ft_psce2_s15(t_stack **stack_A, t_stack **stack_B)
{
	ft_ra(stack_A);
	ft_putendl("ra");
	ft_ra(stack_A);
	ft_putendl("ra");
	ft_pb(stack_A, stack_B);
	ft_putendl("pb");
	ft_psce1_smplfy2(stack_A, stack_B);
}

void			ft_psce2_s16(t_stack **stack_A, t_stack **stack_B)
{
	ft_rra(stack_A);
	ft_putendl("rra");
	ft_rra(stack_A);
	ft_putendl("rra");
	ft_pb(stack_A, stack_B);
	ft_putendl("pb");
	ft_psce1_smplfy1(stack_A, stack_B);
}

void			ft_psce2_s17(t_stack **stack_A, t_stack **stack_B)
{
	ft_pb(stack_A, stack_B);
	ft_putendl("pb");
	ft_rra(stack_A);
	ft_putendl("rra");
	ft_psce1_smplfy2(stack_A, stack_B);
}

void			ft_psce2_s18(t_stack **stack_A, t_stack **stack_B)
{
	ft_sa(stack_A);
	ft_putendl("sa");
	ft_pb(stack_A, stack_B);
	ft_putendl("pb");
	ft_rra(stack_A);
	ft_putendl("rra");
	ft_psce1_smplfy2(stack_A, stack_B);
}

void			ft_psce3_s19(t_stack **stack_A, t_stack **stack_B)
{
	ft_ra(stack_A);
	ft_putendl("ra");
	ft_ra(stack_A);
	ft_putendl("ra");
	ft_pb(stack_A, stack_B);
	ft_putendl("pb");
	ft_sa(stack_A);
	ft_putendl("sa");
	ft_psce1_smplfy2(stack_A, stack_B);
}