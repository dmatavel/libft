/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 14:09:45 by dmatavel          #+#    #+#             */
/*   Updated: 2022/05/13 15:13:08 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst,const char *src, size_t size)
{
	size_t	dst_len = ft_strlen(dst);
	size_t	i;
	
	i = 0;
	while (i < size - 1 && src[i] != '\0')
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len +i] = '\0';
	return (ft_strlen((dst_len + src)));
}

#include <stdio.h>

int	main(void)
{
	char	string[] = "42";
	char	buffer[10] = "Hello!";
	
	ft_strlcat(buffer, string, 1);
	printf("%s\n", buffer);
	printf("%ld\n", ft_strlcat(buffer, string, 13));
	return (0);
}
