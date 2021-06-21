/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 12:48:10 by yjung             #+#    #+#             */
/*   Updated: 2021/06/22 00:28:11 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	print_stack(t_stack *stack)
{
	ft_putendl_fd("------stack------", 1);
	while (stack)
	{
		printf("%d\n", stack->value);
		stack = stack->bottom;
	}
}

int	main(int ac, char *av[])
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	t_info	info;

	if (ac < 2)
		return (0);
	ft_memset(&info, 0, sizeof(t_info));
	stack_a = make_stack(av, &info);
	stack_b = 0;
	print_stack(stack_a);
	sort_main(&stack_a, &stack_b, info.cnt_a);
	print_stack(stack_a);
	print_stack(stack_b);
	exit_free(&stack_a, SUCCESS);
	stack_free(&stack_b);
	return (0);
}
