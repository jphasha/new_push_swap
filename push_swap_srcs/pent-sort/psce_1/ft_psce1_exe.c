#include "../../../push_swap.h"

void			ft_psce1_s1(t_stack **stack_A, t_stack **stack_B)
{
	ft_pb(stack_A, stack_B);
	ft_putendl("pb");
	ft_psce1_smplfy1(stack_A, stack_B);
}

void			ft_psce1_s2(t_stack **stack_A, t_stack **stack_B)
{
	ft_pb(stack_A, stack_B);
	ft_putendl("pb");
	ft_ra(stack_A);
	ft_putendl("ra");
	ft_psce1_smplfy1(stack_A, stack_B);
}

void			ft_psce1_s3(t_stack **stack_A, t_stack **stack_B)
{
	ft_pb(stack_A, stack_B);
	ft_putendl("pb");
	ft_rra(stack_A);
	ft_putendl("rra");
	ft_rra(stack_A);
	ft_putendl("rra");
	ft_psce1_smplfy1(stack_A, stack_B);
}

void			ft_psce1_s5(t_stack **stack_A, t_stack **stack_B)
{
	ft_pb(stack_A, stack_B);
	ft_putendl("pb");
	ft_psce1_smplfy1(stack_A, stack_B);
}

void			ft_psce1_s6(t_stack **stack_A, t_stack **stack_B)
{
	ft_ra(stack_A);
	ft_putendl("ra");
	ft_pb(stack_A, stack_B);
	ft_putendl("pb");
	ft_psce1_smplfy1(stack_A, stack_B);
}
