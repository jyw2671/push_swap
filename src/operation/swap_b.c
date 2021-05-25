/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 17:29:49 by yjung             #+#    #+#             */
/*   Updated: 2021/05/25 17:30:27 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_b(t_stack **a, t_stack **b, t_info *info)
{
	int	tmp;

	(void)a;
	if (info->cnt_b < 2)
		return ;
	tmp = (*b)->value;
	(*b)->value = (*b)->top->value;
	(*b)->top->value = tmp;
}
