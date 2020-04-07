#include "../../push_swap.h"

void			ft_sort_pent(t_stack **stack_A, t_stack **stack_B)
{
	int			pos_min;
	int			pos_max;

	pos_min = ft_find_min(stack_A);
	pos_max = ft_find_max(stack_A);
	if (ft_is_sorted(stack_A) || !*stack_A)
		return ;
	else if (pos_min <= 3 && pos_max <= 4)
		ft_psce_1(stack_A, stack_B);
	else if (pos_min == 5 && (pos_max == 3 || pos_max == 4))
		ft_psce_3(stack_A, stack_B);
	else
		ft_psce_2(stack_A, stack_B);
}

void			ft_psce_1(t_stack **stack_A, t_stack **stack_B)
{
	int			pos_min;
	int			pos_max;

	pos_min = ft_find_min(stack_A);
	pos_max = ft_find_max(stack_A);
	if (pos_min == 1 && pos_max == 2)
		ft_psce1_s1(stack_A, stack_B);
	else if (pos_min == 1 && pos_max == 3)
		ft_psce1_s2(stack_A, stack_B);
	else if (pos_min == 1 && pos_max == 4)
		ft_psce1_s3(stack_A, stack_B);
	else if (pos_min == 2 && pos_max == 1)
		ft_psce1_s5(stack_A, stack_B);
	else if (pos_min == 2 && pos_max == 3)
		ft_psce1_s6(stack_A, stack_B);
	else if (pos_min == 2 && pos_max == 4)
		ft_psce1_s7(stack_A, stack_B);
	else if (pos_min == 3 && pos_max == 1)
		ft_psce1_s9(stack_A, stack_B);
	else if (pos_min == 3 && pos_max == 2)
		ft_psce1_s10(stack_A, stack_B);
	else if (pos_min == 3 && pos_max == 4)
		ft_psce1_s11(stack_A, stack_B);
}

void			ft_psce_2(t_stack **stack_A, t_stack **stack_B)
{
	int			pos_min;
	int			pos_max;

	pos_min = ft_find_min(stack_A);
	pos_max = ft_find_max(stack_A);
	if (pos_min == 1 && pos_max == 5)
		ft_psce2_s4(stack_A, stack_B);
	else if (pos_min == 2 && pos_max == 5)
		ft_psce2_s8(stack_A, stack_B);
	else if (pos_min == 3 && pos_max == 5)
		ft_psce2_s12(stack_A, stack_B);
	else if (pos_min == 4 && pos_max == 1)
		ft_psce2_s13(stack_A, stack_B);
	else if (pos_min == 4 && pos_max == 2)
		ft_psce2_s14(stack_A, stack_B);
	else if (pos_min == 4 && pos_max == 3)
		ft_psce2_s15(stack_A, stack_B);
	else if (pos_min == 4 && pos_max == 5)
		ft_psce2_s16(stack_A, stack_B);
	else if (pos_min == 5 && pos_max == 1)
		ft_psce2_s17(stack_A, stack_B);
	else if (pos_min == 5 && pos_max == 2)
		ft_psce2_s18(stack_A, stack_B);
}

void			ft_psce_3(t_stack **stack_A, t_stack **stack_B)
{
	int			pos_min;
	int			pos_max;

	pos_min = ft_find_min(stack_A);
	pos_max = ft_find_max(stack_A);
	if (pos_min == 5 && pos_max == 3)
		ft_psce3_s19(stack_A, stack_B);
	else if (pos_min == 5 && pos_max == 4)
		ft_psce3_s20(stack_A, stack_B);
}