/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 21:35:08 by yjung             #+#    #+#             */
/*   Updated: 2021/05/25 21:35:32 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rotate_b(t_stack **b, t_info *info)
{
	t_stack	*tmp;
	int		num;

	if (info->cnt_b < 2)
		return (1);
	find_first_stack(b);
	num = (*b)->value;
	stack_delone(b);
	if (!stack_add_back(b, num))
		return (0);
	return (1);
}
