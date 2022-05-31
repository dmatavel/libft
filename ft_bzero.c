/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 12:45:45 by dmatavel          #+#    #+#             */
/*   Updated: 2022/05/31 13:03:15 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	unsigned char	uc;
	size_t			i;

	if (n > 0)
	{
		uc = '\0';
		i = 0;
		while (*(unsigned char *)s && i <= n)
		{
			*(unsigned char *)s = uc;
			i++;
			s++;
		}
	}
	return (0);
}
