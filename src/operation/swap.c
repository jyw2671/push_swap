/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 21:16:35 by yjung             #+#    #+#             */
/*   Updated: 2021/06/21 19:33:22 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack **stack)
{
	int	tmp;

	tmp = (*stack)->value;
	(*stack)->value = (*stack)->bottom->value;
	(*stack)->bottom->value = tmp;
}
