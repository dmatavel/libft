/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 14:09:45 by dmatavel          #+#    #+#             */
/*   Updated: 2022/05/25 18:00:39 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size <= dest_len)
		return (src_len + size);
	i = 0;
	while (src[i] != '\0')
	{
		dest[dest_len++] = src[i++];
		if (i == size - (dest_len - 1))
			break;
	}
	dest[dest_len] = '\0';
	return (dest_len + src_len);
}

/*
int	main(void)
{
	char	src[] = "anotherstring";
	char	dstsize[20] = "one_string";
	size_t	n;

	n = 20;
	printf("%ld\n", (ft_strlcat(dstsize, src, n)));
	printf("%s\n", dstsize);
	return (0);
}
*/

