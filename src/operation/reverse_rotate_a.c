/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_a.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 13:50:10 by yjung             #+#    #+#             */
/*   Updated: 2021/06/01 17:19:06 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate_a(t_stack **a, t_info *info)
{
	t_stack	*tmp;
	t_stack	*last;

	if (info->cnt_a < 2)
		return ;
	last = stack_last(*a);
	tmp = stack_cnt(*a, info->cnt_a - 1);
	(*a)->top = last;
	tmp->bottom = NULL;
	last->top = NULL;
	last->bottom = (*a);
	*a = last;
}
