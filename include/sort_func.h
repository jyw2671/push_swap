/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_func.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 16:56:01 by yjung             #+#    #+#             */
/*   Updated: 2021/06/07 17:27:46 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORT_FUNC_H
# define SORT_FUNC_H

# include "push_swap.h"
# include "push_swap_type.h"
// check_util.c
int		check_stack(t_stack *stack, t_info *info);
void	setting_pivot(t_stack *stack, int *pivot_a, int *pivot_b);
void	check_pivot(int *pivot_a, int *pivot_b);
// sort_main.c
void	sort_main(t_stack **stack, t_info *info);

#endif
