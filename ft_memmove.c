/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:51:20 by dmatavel          #+#    #+#             */
/*   Updated: 2022/06/07 15:29:56 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*dc;
	const char	*sc;	
//	size_t	src_len;
//	size_t	dest_len;
	
	if (dest == NULL && src == NULL)
		return (0);
//	src_len = ft_strlen(src);
//	dest_len = ft_strlen(dest);
	sc = (const char*)(src + (n - 1));
	dc = (char *)(dest + (n - 1));
	if (src > dest)
	{
		while (n--)
			*dc-- = *sc--;
	}
	else
		*dc++ = *sc++;;
	return dest;
}
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	src[] = "Pedro";
	char	dest[10];

	memmove(dest, src + 1, 5);
	printf("%s\n", dest);
	ft_memmove(dest, src + 1, 5);
	printf("%s\n", dest);
}
