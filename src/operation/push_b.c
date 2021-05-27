/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 20:54:46 by yjung             #+#    #+#             */
/*   Updated: 2021/05/27 13:48:31 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	push_b(t_stack **a, t_stack **b, t_info *info)
{
	t_stack	*tmp;

	if (info->cnt_a <= 0)
		return (1);
	find_first_stack(a);
	if (!(*b))
	{
		*b = stack_new((*a)->value);
		if (!(*b))
			return (0);
	}
	else if (!stack_add_front(b, (*a)->value))
		return (0);
	tmp = (*a)->bottom;
	stack_delone(a);
	*a = tmp;
	info->cnt_a--;
	info->cnt_b++;
	return (1);
}
