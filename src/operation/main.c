/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 12:48:10 by yjung             #+#    #+#             */
/*   Updated: 2021/05/27 14:37:35 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int ac, char *av[])
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	t_info	info;
	t_stack	*tmp;
	int		status;

	if (ac < 2)
		return (0);
	ft_memset(&info, 0, sizeof(t_stack));
	stack_a = make_stack(av, &info);
	stack_b = 0;
	find_first_stack(&stack_a);
	tmp = stack_a;
	while (tmp)
	{
		printf("%d\n", tmp->value);
		tmp = tmp->bottom;
	}
	tmp = 0;
	status = reverse_rotate_a(&stack_a, &info);
	printf("new : %d\n", stack_a->bottom->value);
	tmp = stack_a;
	while (tmp)
	{
		printf("%d\n", tmp->value);
		tmp = tmp->bottom;
	}
	return (0);
}
