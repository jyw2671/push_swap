/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 21:13:21 by yjung             #+#    #+#             */
/*   Updated: 2021/06/23 19:03:46 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "util.h"

void	reverse_rotate(t_stack **stack)
{
	t_stack	*last;

	if (*stack == NULL || (*stack)->bottom == NULL)
		return ;
	last = stack_last(*stack);
	(*stack)->top = last;
	last->top->bottom = NULL;
	last->top = NULL;
	last->bottom = (*stack);
	*stack = last;
}
