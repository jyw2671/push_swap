/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_util.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 14:53:28 by yjung             #+#    #+#             */
/*   Updated: 2021/06/22 00:26:24 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*stack_new(int num)
{
	t_stack	*stack;

	stack = malloc(sizeof(t_stack));
	if (stack == NULL)
		return (0);
	stack->bottom = 0;
	stack->top = 0;
	stack->value = num;
	return (stack);
}

t_stack	*stack_cnt(t_stack *stack, int num)
{
	while (--num > 0)
		stack = stack->bottom;
	return (stack);
}

t_stack	*stack_last(t_stack *stack)
{
	while (stack->bottom)
		stack = stack->bottom;
	return (stack);
}

int	check_stack(t_stack *stack, int cnt, int version)
{
	while (stack && --cnt > 0)
	{
		if (version == ASCENDING_ORDER)
		{
			if (stack->value > stack->bottom->value)
				return (0);
		}
		else if (version == DESCENDING_ORDER)
		{
			if (stack->value < stack->bottom->value)
				return (0);
		}
		stack = stack->bottom;
	}
	return (1);
}
