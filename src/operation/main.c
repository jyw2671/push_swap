/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 12:48:10 by yjung             #+#    #+#             */
/*   Updated: 2021/05/25 21:40:42 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int ac, char *av[])
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	t_info	info;

	if (ac < 2)
		return (0);
	ft_memset(&info, 0, sizeof(t_stack));
	stack_a = make_stack(av, &info);
	stack_b = 0;
	return (0);
}
