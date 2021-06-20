/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 20:58:21 by yjung             #+#    #+#             */
/*   Updated: 2021/06/20 18:27:27 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_stack **a)
{
	t_stack	*tmp;

	if (!(*a)->bottom)
		return ;
	tmp = *a;
	*a = (*a)->bottom;
	(*a)->top = NULL;
	tmp->bottom = NULL;
	tmp->top = stack_last(*a);
	tmp->top->bottom = tmp;
}
