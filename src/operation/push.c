/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 17:00:48 by yjung             #+#    #+#             */
/*   Updated: 2021/06/16 17:06:06 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	if (*a == NULL)
		return ;
	tmp = *a;
	*a = (*a)->bottom;
	if (*a)
		(*a)->top = NULL;
	if (*b)
		(*b)->top = tmp;
	tmp->bottom = *b;
	*b = tmp;
	(*b)->top = NULL;
}
