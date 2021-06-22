/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 12:48:10 by yjung             #+#    #+#             */
/*   Updated: 2021/06/22 23:16:46 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char *av[])
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		cnt;

	if (ac < 2)
		return (0);
	stack_a = make_stack(av);
	stack_b = 0;
	cnt = stack_cnt(stack_a);
	sort_main(&stack_a, &stack_b, cnt);
	exit_free(&stack_a, SUCCESS);
	stack_free(&stack_b);
	return (0);
}
