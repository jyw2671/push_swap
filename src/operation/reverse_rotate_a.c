/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_a.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 21:41:38 by yjung             #+#    #+#             */
/*   Updated: 2021/05/25 21:45:28 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// reverse rotate a - 스택 a의 모든 원소들을 아래로 1 인덱스 만큼 내린다. 마지막 원소(바텀)는 첫 번째 원소(탑)가 된다.
#include "push_swap.h"

int	reverse_rotate_a(t_stack **a, t_info *info)
{
	t_stack	*tmp;
	int		num;

	if (info->cnt_a < 2)
		return (1);
	find_last_stack(a);
	num = (*a)->value;
	stack_delone(a);
	if (!stack_add_back(a, num))
		return (0);
	return (1);
}
