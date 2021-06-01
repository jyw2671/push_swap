/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 21:35:08 by yjung             #+#    #+#             */
/*   Updated: 2021/06/01 16:15:31 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_b(t_stack **b, t_info *info)
{
	t_stack	*tmp;

	if (info->cnt_b < 2)
		return ;
	tmp = *b;
	*b = (*b)->bottom;
	(*b)->top = NULL;
	tmp->bottom = NULL;
	tmp->top = stack_last(*b);
	tmp->top->bottom = tmp;
}
