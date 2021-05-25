/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 12:11:21 by yjung             #+#    #+#             */
/*   Updated: 2021/05/25 12:11:22 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_putchar_fd - Outputs the character 'c' to the given file descriptor.
*/

void	ft_putchar_fd(char c, int fd)
{
	unsigned char	u_c;

	u_c = c;
	write(fd, &u_c, 1);
}
