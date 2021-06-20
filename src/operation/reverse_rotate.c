/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 21:13:21 by yjung             #+#    #+#             */
/*   Updated: 2021/06/20 21:14:19 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_stack **stack, int n)
{
	t_stack	*tmp;
	t_stack	*last;

	if (!(*stack)->bottom)
		return ;
	last = stack_last(*stack);
	tmp = stack_cnt(*stack, n - 1);
	(*stack)->top = last;
	tmp->bottom = NULL;
	last->top = NULL;
	last->bottom = (*stack);
	*stack = last;
}
