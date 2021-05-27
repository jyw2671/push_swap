/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 17:34:18 by yjung             #+#    #+#             */
/*   Updated: 2021/05/27 13:42:00 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	push_a(t_stack **a, t_stack **b, t_info *info)
{
	t_stack	*tmp;

	if (info->cnt_b <= 0)
		return (1);
	find_first_stack(b);
	if (!(*a))
	{
		*a = stack_new((*b)->value);
		if (!(*a))
			return (0);
	}
	else if (!stack_add_front(a, (*b)->value))
		return (0);
	tmp = (*b)->bottom;
	stack_delone(b);
	*b = tmp;
	info->cnt_b--;
	info->cnt_a++;
	return (1);
}
