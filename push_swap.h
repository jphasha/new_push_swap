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
int					ft_find_max(t_stack **head);
int					ft_find_midpos(t_stack **stack);
int					ft_find_min(t_stack **stack);
int					ft_is_sorted(t_stack **head);
int					ft_stack_size(t_stack **stack);
int					ft_valid_instr(char *instr);
void				ft_build_stack(t_stack **stack, char **args);
void				ft_del_stack(t_stack **hd_a, t_stack **hd_b);
void				ft_deltop_node(t_stack **head);
void				ft_disp_list(t_stack **hd_a, t_stack **hd_b);
void				ft_free_stack(t_stack **head);
void				ft_new_node(int data, t_stack **head);
void				ft_pa(t_stack **stack_A, t_stack **stack_B);
void				ft_pb(t_stack **stack_A, t_stack **stack_B);
void				ft_psce1_s1(t_stack **stack_A, t_stack **stack_B);
void				ft_psce1_s2(t_stack **stack_A, t_stack **stack_B);
void				ft_psce1_s3(t_stack **stack_A, t_stack **stack_B);
void				ft_psce1_s5(t_stack **stack_A, t_stack **stack_B);
void				ft_psce1_s6(t_stack **stack_A, t_stack **stack_B);
void				ft_psce1_s7(t_stack **stack_A, t_stack **stack_B);
void				ft_psce1_s9(t_stack **stack_A, t_stack **stack_B);
void				ft_psce1_s10(t_stack **stack_A, t_stack **stack_B);
void				ft_psce1_s11(t_stack **stack_A, t_stack **stack_B);
void				ft_psce1_smplfy1(t_stack **stack_A, t_stack **stack_B);
void				ft_psce1_smplfy2(t_stack **stack_A, t_stack **stack_B);
void				ft_psce2_s4(t_stack **stack_A, t_stack **stack_B);
void				ft_psce2_s8(t_stack **stack_A, t_stack **stack_B);
void				ft_psce2_s12(t_stack **stack_A, t_stack **stack_B);
void				ft_psce2_s13(t_stack **stack_A, t_stack **stack_B);
void				ft_psce2_s14(t_stack **stack_A, t_stack **stack_B);
void				ft_psce2_s15(t_stack **stack_A, t_stack **stack_B);
void				ft_psce2_s16(t_stack **stack_A, t_stack **stack_B);
void				ft_psce2_s17(t_stack **stack_A, t_stack **stack_B);
void				ft_psce2_s18(t_stack **stack_A, t_stack **stack_B);
void				ft_psce3_s19(t_stack **stack_A, t_stack **stack_B);
void				ft_psce3_s20(t_stack **stack_A, t_stack **stack_B);
void				ft_psce_1(t_stack **stack_A, t_stack **stack_B);
void				ft_psce_2(t_stack **stack_A, t_stack **stack_B);
void				ft_psce_3(t_stack **stack_A, t_stack **stack_B);
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
void    			ft_sort_first_tri(t_stack **stack);
void				ft_sort_pent(t_stack **stack_A, t_stack **stack_B);
void				ft_srtd_stck(t_stack **hd_a, t_stack **hd_b);
void				ft_sort_tri(t_stack **stack);
void				ft_tri_exe_1_2(t_stack **head);
void				ft_tri_exe_2_1(t_stack **head);
void				ft_tri_exe_2_3(t_stack **head);
void				ft_tri_exe_3_1(t_stack **head);
void				ft_tri_exe_3_2(t_stack **head);

#endif
