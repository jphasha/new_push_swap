#include "../../push_swap.h"

void	ft_tri_exe_1_2(t_stack **head)
{
	ft_sa(head);
	ft_ra(head);
	ft_putendl("sa");
	ft_putendl("ra");
}

void	ft_tri_exe_2_3(t_stack **head)
{
	ft_sa(head);
	ft_putendl("sa");
}

void	ft_tri_exe_2_1(t_stack **head)
{
	ft_ra(head);
	ft_putendl("ra");
}

void	ft_tri_exe_3_1(t_stack **head)
{
	ft_sa(head);
	ft_rra(head);
	ft_putendl("sa");
	ft_putendl("rra");
}

void	ft_tri_exe_3_2(t_stack **head)
{
	ft_rra(head);
	ft_putendl("rra");
}