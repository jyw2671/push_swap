/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strappendc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 12:08:29 by yjung             #+#    #+#             */
/*   Updated: 2021/05/25 12:08:31 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strappendc(char *str, char c)
{
	int		len;
	char	*result;

	len = ft_strlen(str);
	if (!ft_malloc((void **)&result, sizeof(char *) * (len + 2)))
	{
		free(str);
		return (0);
	}
	ft_memmove(result, str, sizeof(char) * len);
	result[len] = c;
	free(str);
	return (result);
}
