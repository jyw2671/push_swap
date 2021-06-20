/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 21:14:57 by yjung             #+#    #+#             */
/*   Updated: 2021/06/20 21:15:57 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_stack **stack)
{
	t_stack	*tmp;

	if (!(*stack)->bottom)
		return ;
	tmp = *stack;
	*stack = (*stack)->bottom;
	(*stack)->top = NULL;
	tmp->bottom = NULL;
	tmp->top = stack_last(*stack);
	tmp->top->bottom = tmp;
}
