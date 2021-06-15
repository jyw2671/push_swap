/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_type.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 13:25:06 by yjung             #+#    #+#             */
/*   Updated: 2021/06/15 19:47:53 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_TYPE_H
# define PUSH_SWAP_TYPE_H

# include "push_swap.h"

typedef struct s_stack
{
	struct s_stack	*bottom;
	int				value;
	struct s_stack	*top;
}	t_stack;

typedef struct s_info
{
	int		max;
	int		min;
	int		cnt;
	int		pivot_a;
	int		pivot_b;
	int		cnt_a;
	int		cnt_b;
}	t_info;

#endif
