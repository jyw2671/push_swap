/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_func.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 18:46:56 by yjung             #+#    #+#             */
/*   Updated: 2021/06/20 22:17:22 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORT_FUNC_H
# define SORT_FUNC_H

# include "push_swap.h"

int	sort_main(t_stack **stack, int cnt);
int	set_pivot(t_stack *stack, t_info *info, int cnt);

#endif
