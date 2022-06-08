/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 22:52:44 by dmatavel          #+#    #+#             */
/*   Updated: 2022/06/07 22:56:52 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" /*unistd.h > write*/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
