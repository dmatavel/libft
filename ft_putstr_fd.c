/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 23:00:02 by dmatavel          #+#    #+#             */
/*   Updated: 2022/06/07 23:57:41 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" /*unistd.h > write*/

void	ft_putstr_fd(char *s, int fd)
{
	if (s == NULL || fd < 0)
		return ;
	while (*s)
		write(fd, s++, 1);
}
