#include "../push_swap.h"

static void ft_sft_s1(t_stack **stack)
{
    ft_ra(stack);
    ft_putendl("ra");
    ft_sa(stack);
    ft_putendl("sa");
    ft_rra(stack);
    ft_putendl("rra");
}

static void ft_sft_s2(t_stack **stack)
{
    ft_ra(stack);
    ft_putendl("ra");
    ft_sa(stack);
    ft_putendl("sa");
    ft_rra(stack);
    ft_putendl("rra");
    ft_sa(stack);
    ft_putendl("sa");
}

static void ft_sft_s3(t_stack **stack)
{
    ft_sa(stack);
    ft_putendl("sa");
    ft_ra(stack);
    ft_putendl("ra");
    ft_sa(stack);
    ft_putendl("sa");
    ft_rra(stack);
    ft_putendl("rra");
}

static void ft_sft_s4(t_stack **stack)
{
    ft_sa(stack);
    ft_putendl("sa");
    ft_ra(stack);
    ft_putendl("ra");
    ft_sa(stack);
    ft_putendl("sa");
    ft_rra(stack);
    ft_putendl("rra");
    ft_sa(stack);
    ft_putendl("sa");
}

void    ft_sort_first_tri(t_stack **stack)
{
    if (!ft_is_sorted(stack) && ft_stack_size(stack) >= 3)
    {
        t_stack *iter;
        int     pos_1;
        int     pos_2;
        int     pos_3;

        iter = *stack;
        pos_1 = iter->data;
        pos_2 = iter->next->data;
        pos_3 = iter->next->next->data;
        if ((pos_1 < pos_2) && (pos_1 < pos_3) && (pos_2 > pos_3))
        {
            ft_sft_s1(stack);
        }

        else if ((pos_1 > pos_2) && (pos_1 < pos_3) && (pos_2 < pos_3))
        {
            ft_sa(stack);
            ft_putendl("sa");
        }

        else if ((pos_1 < pos_2) && (pos_1 > pos_3) && (pos_2 > pos_3))
        {
            ft_sft_s2(stack);
        }

        else if ((pos_1 > pos_2) && (pos_1 > pos_3) && (pos_2 < pos_3))
        {
            ft_sft_s3(stack);
        }

        else if ((pos_1 > pos_2) && (pos_1 > pos_3) & (pos_2 > pos_3))
        {
            ft_sft_s4(stack);
        }
    }
}