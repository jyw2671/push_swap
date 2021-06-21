/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_util2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 18:07:59 by yjung             #+#    #+#             */
/*   Updated: 2021/06/21 19:33:30 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_add_front(t_stack **stack, int num)
{
	t_stack	*new;
	t_stack	*first;

	new = stack_new(num);
	if (!new)
		return (0);
	first = *stack;
	new->bottom = first;
	first->top = new;
	return (1);
}

int	stack_add_back(t_stack **stack, int num)
{
	t_stack	*new;
	t_stack	*last;

	new = stack_new(num);
	if (!new)
		return (0);
	last = stack_last(*stack);
	last->bottom = new;
	new->top = last;
	return (1);
}
