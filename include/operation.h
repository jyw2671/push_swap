/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 16:51:07 by yjung             #+#    #+#             */
/*   Updated: 2021/06/15 21:02:10 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERATION_H
# define OPERATION_H

# include "push_swap.h"

void	swap_a(t_stack **a);
void	swap_b(t_stack **b);
void	swap_ab(t_stack **a, t_stack **b);
int		push_a(t_stack **a, t_stack **b, t_info *info);
int		push_b(t_stack **b, t_stack **a, t_info *info);
void	rotate_a(t_stack **a);
void	rotate_b(t_stack **b);
void	rotate_ab(t_stack **a, t_stack **b);
void	reverse_rotate_a(t_stack **a, int n);
void	reverse_rotate_b(t_stack **b, int n);
void	reverse_rotate_ab(t_stack **a, t_stack **b, t_info *info);

#endif
