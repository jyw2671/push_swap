/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_util2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 18:07:59 by yjung             #+#    #+#             */
/*   Updated: 2021/06/07 16:39:47 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_delone(t_stack **stack)
{
	if ((*stack)->top)
		(*stack)->top->bottom = (*stack)->bottom;
	if ((*stack)->bottom)
		(*stack)->bottom->top = (*stack)->top;
	free(stack);
}

int	stack_add_front(t_stack **stack, int num)
{
	t_stack	*new;
	t_stack	*first;

	new = stack_new(num);
	if (!new)
		return (0);
	first = stack_first(*stack);
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

void	stack_add_stack(t_stack **stack, t_stack **back)
{
	t_stack	*last;

	if (!(*back))
		return ;
	last = stack_last(*stack);
	last->bottom = *back;
	(*back)->top = last;
}
