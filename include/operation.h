/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 16:51:07 by yjung             #+#    #+#             */
/*   Updated: 2021/05/27 14:25:00 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERATION_H
# define OPERATION_H

# include "push_swap.h"

void	swap_a(t_stack **a, t_info *info);
void	swap_b(t_stack **b, t_info *info);
void	swap_ab(t_stack **a, t_stack **b, t_info *info);
int		push_a(t_stack **a, t_stack **b, t_info *info);
int		push_b(t_stack **b, t_stack **a, t_info *info);
int		rotate_a(t_stack **a, t_info *info);
int		rotate_b(t_stack **b, t_info *info);
int		rotate_ab(t_stack **a, t_stack **b, t_info *info);
int		reverse_rotate_a(t_stack **a, t_info *info);

#endif
