/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 20:54:46 by yjung             #+#    #+#             */
/*   Updated: 2021/05/25 21:33:03 by yjung            ###   ########.fr       */
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
		tmp = stack_new((*a)->value);
		if (!tmp)
			return (0);
	}
	else if (!stack_add_front(b, (*a)->value))
		return (0);
	stack_delone(a);
	info->cnt_a--;
	info->cnt_b++;
	return (1);
}
