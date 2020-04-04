/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphasha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 15:31:20 by jphasha           #+#    #+#             */
/*   Updated: 2019/09/23 14:50:44 by jphasha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

typedef struct		s_stack
{
	int				data;
	struct s_stack	*next;
}					t_stack;
char				**ft_get_args(char **argv, int argc);
int					ft_error_handle(char **args);
int					ft_find_midpos(t_stack **stack);
int					ft_find_min(t_stack **stack);
int					ft_is_sorted(t_stack **head);
int					ft_valid_instr(char *instr);
void				ft_build_stack(t_stack **stack, char **args);
void				ft_del_stack(t_stack **hd_a, t_stack **hd_b);
void				ft_deltop_node(t_stack **head);
void				ft_disp_list(t_stack **hd_a, t_stack **hd_b);
void				ft_free_stack(t_stack **head);
void				ft_new_node(int data, t_stack **head);
void				ft_pa(t_stack **stack_A, t_stack **stack_B);
void				ft_pb(t_stack **stack_A, t_stack **stack_B);
void				ft_push_top(int data, t_stack **head);
void				ft_push_bottom(int data, t_stack **head);
void				ft_ra(t_stack **stack_A);
void				ft_rb(t_stack **stack_B);
void				ft_rr(t_stack **stack_A, t_stack **stack_B);
void				ft_rra(t_stack **stack_A);
void				ft_rrb(t_stack **stack_B);
void				ft_rrr(t_stack **stack_A, t_stack **stack_B);
void				ft_sa(t_stack **stack_A);
void				ft_ss(t_stack **stack_A, t_stack **stack_B);
void				ft_sb(t_stack **stack_B);
void				ft_sort_algo(t_stack **stack_A, t_stack **stack_B);
void				ft_srtd_stck(t_stack **hd_a, t_stack **hd_b);

#endif
