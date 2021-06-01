/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_b.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 17:19:23 by yjung             #+#    #+#             */
/*   Updated: 2021/06/01 17:19:52 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate_b(t_stack **b, t_info *info)
{
	t_stack	*tmp;
	t_stack	*last;

	if (info->cnt_b < 2)
		return ;
	last = stack_last(*b);
	tmp = stack_cnt(*b, info->cnt_b - 1);
	(*b)->top = last;
	tmp->bottom = NULL;
	last->top = NULL;
	last->bottom = (*b);
	*b = last;
}
