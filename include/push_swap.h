/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 18:46:56 by yjung             #+#    #+#             */
/*   Updated: 2021/06/23 19:27:24 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include "util.h"

# define CNT	0
# define RA		1
# define RB		2
# define P_CNT	3

void	sort_main(t_stack **stack_a, t_stack **stack_b, int size);

int		set_pivot(int pivot[], t_stack *stack, int cnt);

void	stack_sort_a(t_stack **a, t_stack **b, int cnt);
void	setting_stack(t_stack **a, t_stack **b, int ra, int rb);

void	stack_sort_b(t_stack **a, t_stack **b, int cnt);
void	push_a_all(t_stack **a, t_stack **b, int cnt);

void	sort_three_first(t_stack **a, t_stack **b);

void	sort_a_three(t_stack **a, t_stack **b);

void	sort_b_three(t_stack **a, t_stack **b);

void	sort_five_stack(t_stack **a, t_stack **b);

#endif
