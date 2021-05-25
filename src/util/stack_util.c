/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_util.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 14:53:28 by yjung             #+#    #+#             */
/*   Updated: 2021/05/25 15:52:58 by yjung            ###   ########.fr       */
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

t_stack	*stack_last(t_stack *stack)
{
	while (stack->bottom)
		stack = stack->bottom;
	return (stack);
}
