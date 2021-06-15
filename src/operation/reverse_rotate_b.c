/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_b.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 17:19:23 by yjung             #+#    #+#             */
/*   Updated: 2021/06/15 21:00:47 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate_b(t_stack **b, int n)
{
	t_stack	*tmp;
	t_stack	*last;

	last = stack_last(*b);
	tmp = stack_cnt(*b, n - 1);
	(*b)->top = last;
	tmp->bottom = NULL;
	last->top = NULL;
	last->bottom = (*b);
	*b = last;
}
