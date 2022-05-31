/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 17:29:57 by dmatavel          #+#    #+#             */
/*   Updated: 2022/05/31 14:20:43 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	uc;
	size_t			i;

	uc = c;
	i = 0;
	while (*(unsigned char *)s && i < n)
	{
		*(unsigned char *)s = uc;
		i++;
		s++;
	}
	return (s);
}
