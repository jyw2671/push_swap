/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_a.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 13:50:10 by yjung             #+#    #+#             */
/*   Updated: 2021/06/20 20:56:25 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate_a(t_stack **a, int n)
{
	t_stack	*tmp;
	t_stack	*last;

	if (!(*a)->bottom)
		return ;
	last = stack_last(*a);
	tmp = stack_cnt(*a, n - 1);
	(*a)->top = last;
	tmp->bottom = NULL;
	last->top = NULL;
	last->bottom = (*a);
	*a = last;
}
