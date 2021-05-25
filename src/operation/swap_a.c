/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 16:36:43 by yjung             #+#    #+#             */
/*   Updated: 2021/05/25 21:13:26 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_stack **a, t_info *info)
{
	int	tmp;

	if (info->cnt_a < 2)
		return ;
	tmp = (*a)->value;
	(*a)->value = (*a)->top->value;
	(*a)->top->value = tmp;
}
