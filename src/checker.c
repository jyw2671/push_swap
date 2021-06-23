/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 16:34:13 by yjung             #+#    #+#             */
/*   Updated: 2021/06/23 19:52:43 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	main(int ac, char *av[])
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	t_list	*oper;
	int		cnt;

	if (ac < 2)
		return (0);
	stack_a = make_stack(av);
	stack_b = 0;
	cnt = stack_cnt(stack_a);
	oper = read_oper(&stack_a);
	if (!check_oper(&stack_a, &stack_b, oper))
		ft_putendl_fd("Error", 2);
	else
		check_checker_stack(stack_a, stack_b);
	stack_free(&stack_a);
	stack_free(&stack_b);
	ft_lstclear(&oper, free);
	return (0);
}
