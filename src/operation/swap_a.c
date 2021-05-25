/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 16:36:43 by yjung             #+#    #+#             */
/*   Updated: 2021/05/25 17:28:16 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_stack **a, t_stack **b, t_info *info)
{
	int	tmp;

	(void)b;
	if (info->cnt_a < 2)
		return ;
	tmp = (*a)->value;
	(*a)->value = (*a)->top->value;
	(*a)->top->value = tmp;
}
