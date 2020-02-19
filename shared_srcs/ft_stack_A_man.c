#include "../push_swap.h"

void    ft_sa(t_stack **stack_A)
{
    t_stack *hd_a;
    int     swpr;

    hd_a = *stack_A;
    if (!hd_a || !hd_a->next)
        return ;
    swpr = hd_a->next->data;
    hd_a->next->data = hd_a->data;
    hd_a->data = swpr;
}

void    ft_ra(t_stack **stack_A)
{
    t_stack *temp_head;
    t_stack *iterator;

    temp_head = *stack_A;
    iterator = *stack_A;
    if (!temp_head || !temp_head->next)
        return ;
    *stack_A = temp_head->next;
    while (iterator->next)
        iterator = iterator->next;
    iterator->next = temp_head;
    temp_head->next = NULL;
}

void    ft_rra(t_stack **stack_A)
{
    t_stack *temp_head;

    temp_head = *stack_A;
    if (!temp_head || !temp_head->next)
        return ;
    while (temp_head->next->next)
        temp_head = temp_head->next;
    temp_head->next->next = *stack_A;
    *stack_A = temp_head->next;
    temp_head->next = NULL;
}

void    ft_pa(t_stack **stack_A, t_stack **stack_B)
{
    t_stack *temp_head;

    temp_head = *stack_B;
    if (temp_head)
    {
        ft_push_top(temp_head->data, stack_A);
        ft_deltop_node(stack_B);
    }
}