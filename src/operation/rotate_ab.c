/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_ab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 21:36:36 by yjung             #+#    #+#             */
/*   Updated: 2021/05/25 21:40:05 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rotate_ab(t_stack **a, t_stack **b, t_info *info)
{
	if (!rotate_a(a, info))
		return (0);
	if (!rotate_b(b, info))
		return (0);
	return (1);
}
