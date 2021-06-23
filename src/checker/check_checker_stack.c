/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_checker_stack.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 17:37:02 by yjung             #+#    #+#             */
/*   Updated: 2021/06/23 17:42:19 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	check_checker_stack(t_stack *a, t_stack *b)
{
	int	cnt;

	cnt = stack_cnt(a);
	if (!check_stack(a, cnt, ASCENDING_ORDER))
		return (ft_putendl_fd("KO", 1));
	if (b)
		return (ft_putendl_fd("KO", 1));
	ft_putendl_fd("OK", 1);
}
