/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_ab.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 17:20:15 by yjung             #+#    #+#             */
/*   Updated: 2021/06/15 21:02:31 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate_ab(t_stack **a, t_stack **b, t_info *info)
{
	reverse_rotate_a(a, info->cnt_a);
	reverse_rotate_b(b, info->cnt_b);
}
