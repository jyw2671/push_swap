/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 13:01:20 by yjung             #+#    #+#             */
/*   Updated: 2021/06/22 00:09:59 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTIL_H
# define UTIL_H

# include "push_swap.h"
# include "push_swap_type.h"
//make_stack.c
t_stack	*make_stack(char *av[], t_info *info);
// exit_free.c
void	stack_free(t_stack **stack);
int		stack_free_ret(t_stack **stack, int ret);
int		free_split(char ***str);
void	exit_free(t_stack **stack, int status);
// stack_util.c
t_stack	*stack_new(int num);
t_stack	*stack_cnt(t_stack *stack, int num);
t_stack	*stack_last(t_stack *stack);
int		check_stack(t_stack *stack, int cnt, int version);
// stack_util2.c
int		stack_add_front(t_stack **stack, int num);
int		stack_add_back(t_stack **stack, int num);
// print_oper.c
void	print_oper(t_stack **stack_a, t_stack **stack_b, char *oper);

#endif
