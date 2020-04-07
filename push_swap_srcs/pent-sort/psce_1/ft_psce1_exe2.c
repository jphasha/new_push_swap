#include "../../../push_swap.h"

void			ft_psce1_s7(t_stack **stack_A, t_stack **stack_B)
{
	ft_ra(stack_A);
	ft_putendl("ra");
	ft_pb(stack_A, stack_B);
	ft_putendl("pb");
	ft_ra(stack_A);
	ft_putendl("ra");
	ft_psce1_smplfy1(stack_A, stack_B);
}

void			ft_psce1_s9(t_stack **stack_A, t_stack **stack_B)
{
	ft_pb(stack_A, stack_B);
	ft_putendl("pb");
	ft_ra(stack_A);
	ft_putendl("ra");
	ft_psce1_smplfy2(stack_A, stack_B);
}

void			ft_psce1_s10(t_stack **stack_A, t_stack **stack_B)
{
	ft_ra(stack_A);
	ft_putendl("ra");
	ft_pb(stack_A, stack_B);
	ft_putendl("pb");
	ft_psce1_smplfy2(stack_A, stack_B);
}

void			ft_psce1_s11(t_stack **stack_A, t_stack **stack_B)
{
	ft_ra(stack_A);
	ft_putendl("ra");
	ft_ra(stack_A);
	ft_putendl("ra");
	ft_pb(stack_A, stack_B);
	ft_putendl("pb");
	ft_psce1_smplfy1(stack_A, stack_B);
}

void			ft_psce3_s20(t_stack **stack_A, t_stack **stack_B)
{
	ft_rra(stack_A);
	ft_putendl("rra");
	ft_rra(stack_A);
	ft_putendl("rra");
	ft_pb(stack_A, stack_B);
	ft_putendl("pb");
	ft_psce1_smplfy2(stack_A, stack_B);
}