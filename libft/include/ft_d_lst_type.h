/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_d_lst_type.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 12:02:10 by yjung             #+#    #+#             */
/*   Updated: 2021/05/25 12:02:13 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_D_LST_TYPE_H
# define FT_D_LST_TYPE_H

# include "libft.h"

typedef struct s_d_list
{
	struct s_d_list	*next;
	struct s_d_list	*prev;
	void			*content;
}				t_d_list;

#endif
