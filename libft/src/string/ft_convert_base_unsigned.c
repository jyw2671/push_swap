/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base_unsigned.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 12:08:01 by yjung             #+#    #+#             */
/*   Updated: 2021/05/25 12:08:02 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_digist(t_ull n, int base)
{
	size_t	count;

	count = 0;
	while (n)
	{
		n /= base;
		count++;
	}
	return (count);
}

char	*ft_convert_base_unsigned(
	t_ull num,
	const char *base_set,
	int base)
{
	char	*result;
	size_t	len;

	if (num == 0)
		return (ft_strdup("0"));
	len = ft_count_digist(num, base);
	result = malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (0);
	result[len] = 0;
	while (len)
	{
		result[--len] = base_set[num % base];
		num = num / base;
	}
	return (result);
}
