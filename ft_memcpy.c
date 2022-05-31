/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 13:20:24 by dmatavel          #+#    #+#             */
/*   Updated: 2022/05/31 14:19:26 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (*(unsigned char *)src && i < n)
	{
		*(unsigned char *)dest = *(unsigned char *)src;
		src++;
		dest++;
		i++;
	}
	return (dest);
}
