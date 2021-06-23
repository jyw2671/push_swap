/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_util2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 18:07:59 by yjung             #+#    #+#             */
/*   Updated: 2021/06/23 19:04:15 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "util.h"

void	stack_add_front(t_stack **stack, int num)
{
	t_stack	*new;
	t_stack	*first;

	new = stack_new(num);
	if (!new)
		return ;
	first = *stack;
	new->bottom = first;
	first->top = new;
}

void	stack_add_back(t_stack **stack, t_stack *new)
{
	t_stack	*last;

	if (!new)
		return ;
	last = stack_last(*stack);
	last->bottom = new;
	new->top = last;
}
