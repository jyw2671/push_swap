/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 16:36:43 by yjung             #+#    #+#             */
/*   Updated: 2021/06/15 20:58:00 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_stack **a)
{
	int	tmp;

	find_first_stack(a);
	tmp = (*a)->value;
	(*a)->value = (*a)->bottom->value;
	(*a)->bottom->value = tmp;
}
