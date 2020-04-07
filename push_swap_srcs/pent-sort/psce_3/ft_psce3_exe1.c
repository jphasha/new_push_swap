#include "../../../push_swap.h"

void    ft_psce3_s19(t_stack **stack_A, t_stack **stack_B)
{
    ft_rra(stack_A);
    ft_putendl("rra");
    ft_pb(stack_A, stack_B);
    ft_putendl("pb");
    ft_rra(stack_A);
    ft_putendl("rra");
    ft_rra(stack_A);
    ft_putendl("rra");
    ft_psce1_smplfy1(stack_A, stack_B);
}

void    ft_psce3_s20(t_stack **stack_A, t_stack **stack_B)
{
    ft_rra(stack_A);
    ft_putendl("rra");
    ft_pb(stack_A, stack_B);
    ft_putendl("pb");
    ft_rra(stack_A);
    ft_putendl("rra");
    ft_psce1_smplfy1(stack_A, stack_B);
}