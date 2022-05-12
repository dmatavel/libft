/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 12:34:35 by dmatavel          #+#    #+#             */
/*   Updated: 2022/05/12 15:53:41 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	
	i = -1;
	while (i < size - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	while (i < size - 1)
	{
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

int	main(void)
{
	char	dst[13] = "Hello, 42!";

	ft_strlcpy(dst, "Hello, World!", 13);
	printf("%s\n", dst);
	return (0);
}

