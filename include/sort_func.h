/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_func.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 18:46:56 by yjung             #+#    #+#             */
/*   Updated: 2021/06/23 16:25:23 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORT_FUNC_H
# define SORT_FUNC_H

# include "push_swap.h"
// sort_main.c
void	sort_main(t_stack **stack_a, t_stack **stack_b, int size);
// set_pivot.c
int		set_pivot(int pivot[], t_stack *stack, int cnt);
// stack_sort_a.c
void	stack_sort_a(t_stack **a, t_stack **b, int cnt);
void	setting_stack(t_stack **a, t_stack **b, int ra, int rb);
// stack_sort_b.c
void	stack_sort_b(t_stack **a, t_stack **b, int cnt);
void	push_a_all(t_stack **a, t_stack **b, int cnt);
// sort_three_first.c
void	sort_three_first(t_stack **a, t_stack **b);
// sort_a_three.c
void	sort_a_three(t_stack **a, t_stack **b);
// sort_b_three.c
void	sort_b_three(t_stack **a, t_stack **b);
// sort_five_stack.c
void	sort_five_stack(t_stack **a, t_stack **b);

#endif
