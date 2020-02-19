#include "../push_swap.h"

void    ft_sb(t_stack **stack_B)
{
    t_stack *temp_head;
    int     swpr;

    temp_head = *stack_B;
    if (!temp_head || !temp_head->next)
        return ;
    swpr = temp_head->next->data;
    temp_head->next->data = temp_head->data;
    temp_head->data = swpr;
}

void    ft_rb(t_stack **stack_B)
{
    t_stack *temp_head;
    t_stack *iterator;

    temp_head = *stack_B;
    iterator = *stack_B;
    if (!temp_head || !temp_head->next)
        return ;
    *stack_B = temp_head->next;
    while (iterator->next)
        iterator = iterator->next;
    iterator->next = temp_head;
    temp_head->next = NULL;
}

void    ft_rrb(t_stack **stack_B)
{
    t_stack *temp_head;

    temp_head = *stack_B;
    if (!temp_head || !temp_head->next)
        return ;
    while (temp_head->next->next)
        temp_head = temp_head->next;
    temp_head->next->next = *stack_B;
    *stack_B = temp_head->next;
    temp_head->next = NULL;
}

void    ft_pb(t_stack **stack_A, t_stack **stack_B)
{
    t_stack *temp_head;

    temp_head = *stack_A;
    if (temp_head)
    {
        ft_push_top(temp_head->data, stack_B);
        ft_deltop_node(stack_A);
    }
}