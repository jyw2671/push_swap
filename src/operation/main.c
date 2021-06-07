/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 12:48:10 by yjung             #+#    #+#             */
/*   Updated: 2021/06/07 17:05:20 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

static void	print_stack(t_stack *stack)
{
	while (stack)
	{
		printf("%d\n", stack->value);
		stack = stack->bottom;
	}
}

int	main(int ac, char *av[])
{
	t_stack	*stack_a;
	t_info	info;

	if (ac < 2)
		return (0);
	ft_memset(&info, 0, sizeof(t_stack));
	stack_a = make_stack(av, &info);
	print_stack(stack_a);
	sort_main(&stack_a, &info);
	printf("sort func\n");
	print_stack(stack_a);
	exit_free(&stack_a);
	return (0);
}
