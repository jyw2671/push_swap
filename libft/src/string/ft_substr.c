/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 12:10:21 by yjung             #+#    #+#             */
/*   Updated: 2021/05/25 12:10:22 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_substr - A new String containing the extracted characters
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;

	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (0);
	ft_memcpy(result, s + start, len);
	result[len] = '\0';
	return (result);
}
