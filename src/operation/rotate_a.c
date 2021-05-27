/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 20:58:21 by yjung             #+#    #+#             */
/*   Updated: 2021/05/27 14:16:12 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rotate_a(t_stack **a, t_info *info)
{
	t_stack	*tmp;
	int		num;

	if (info->cnt_a < 2)
		return (1);
	find_first_stack(a);
	num = (*a)->value;
	tmp = (*a)->bottom;
	stack_delone(a);
	*a = tmp;
	if (!stack_add_back(a, num))
		return (0);
	return (1);
}
