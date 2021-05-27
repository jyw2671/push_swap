/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 17:29:49 by yjung             #+#    #+#             */
/*   Updated: 2021/05/27 12:28:41 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_b(t_stack **b, t_info *info)
{
	int	tmp;

	if (info->cnt_b < 2)
		return ;
	find_first_stack(b);
	tmp = (*b)->value;
	(*b)->value = (*b)->bottom->value;
	(*b)->bottom->value = tmp;
}
