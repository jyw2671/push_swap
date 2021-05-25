/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 16:51:07 by yjung             #+#    #+#             */
/*   Updated: 2021/05/25 17:33:35 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERATION_H
# define OPERATION_H

# include "push_swap.h"

void	swap_a(t_stack **a, t_stack **b, t_info *info);
void	swap_b(t_stack **a, t_stack **b, t_info *info);
void	swap_ab(t_stack **a, t_stack **b, t_info *info);

#endif
