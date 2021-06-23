/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 13:01:20 by yjung             #+#    #+#             */
/*   Updated: 2021/06/23 16:23:26 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTIL_H
# define UTIL_H

# include "push_swap.h"
# include "push_swap_type.h"

t_stack	*make_stack(char *av[]);

void	stack_free(t_stack **stack);
int		stack_free_ret(t_stack **stack, int ret);
int		free_split(char ***str);
void	exit_free(t_stack **stack, int status);
void	exit_malloc_fail(t_stack **stack_a, t_stack **stack_b);

t_stack	*stack_new(int num);
t_stack	*stack_last(t_stack *stack);
int		check_stack(t_stack *stack, int cnt, int version);
int		stack_cnt(t_stack *stack);

void	stack_add_front(t_stack **stack, int num);
void	stack_add_back(t_stack **stack, t_stack *new);

void	print_oper(t_stack **stack_a, t_stack **stack_b, char *oper);

#endif
