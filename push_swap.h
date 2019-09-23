/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphasha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 15:31:20 by jphasha           #+#    #+#             */
/*   Updated: 2019/09/23 10:04:27 by jphasha          ###   ########.fr       */
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
int					ft_is_sorted(t_stack **head);
void				ft_del_stack(t_stack **hd_a, t_stack **hd_b);
void				ft_deltop_node(t_stack **head);
void				ft_disp_list(t_stack **hd_a, t_stack **hd_b);
char				**ft_get_args(char **argv, t_stack **hd_a, int argc);
void				ft_new_node(int data, t_stack **head);
void				ft_push_top(int data, t_stack **head);
void				ft_push_bottom(int data, t_stack **head);
void				ft_srtd_stck(t_stack **hd_a, t_stack **hd_b);

#endif
