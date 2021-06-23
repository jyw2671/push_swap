/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 17:03:44 by yjung             #+#    #+#             */
/*   Updated: 2021/06/23 20:02:39 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "libft.h"
# include "util.h"

t_list	*read_oper(t_stack **stack);
int		check_oper(t_stack **a, t_stack **b, t_list *oper);
void	check_checker_stack(t_stack *a, t_stack *b);

#endif
