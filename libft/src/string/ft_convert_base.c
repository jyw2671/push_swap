/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 12:08:06 by yjung             #+#    #+#             */
/*   Updated: 2021/05/25 12:08:08 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_convert_base(
	t_ll num,
	const char *base_set,
	int base)
{
	char	*tmp;
	char	*result;

	if (num < 0)
	{
		tmp = ft_convert_base_unsigned(-num, base_set, base);
		result = ft_strjoin("-", tmp);
		free(tmp);
		return (result);
	}
	else
		return (ft_convert_base_unsigned(num, base_set, base));
}
