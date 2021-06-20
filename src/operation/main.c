/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 12:48:10 by yjung             #+#    #+#             */
/*   Updated: 2021/06/20 19:23:00 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int ac, char *av[])
{
	t_stack	*stack_a;
	t_info	info;

	if (ac < 2)
		return (0);
	ft_memset(&info, 0, sizeof(t_info));
	stack_a = make_stack(av, &info);
	print_stack(stack_a);
	if (sort_main(&stack_a, info.cnt_a) == FAIL)
		exit_free(&stack_a, FAIL);
	print_stack(stack_a);
	exit_free(&stack_a, SUCCESS);
	return (0);
}
