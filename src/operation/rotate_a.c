/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 20:58:21 by yjung             #+#    #+#             */
/*   Updated: 2021/05/25 21:38:38 by yjung            ###   ########.fr       */
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
	stack_delone(a);
	if (!stack_add_back(a, num))
		return (0);
	return (1);
}
