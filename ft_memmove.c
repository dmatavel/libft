/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:51:20 by dmatavel          #+#    #+#             */
/*   Updated: 2022/05/31 17:22:55 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*temp;
	size_t			i;

	/*i have to use malloc here*/
	i = 0;
	while (*(unsigned char *)src && i++ < n)
	{
		*temp++ = *(unsigned char *)src++;
	}
	i = 0;
	while (*(unsigned char *)temp && i++ < n)
	{
		*(unsigned char *)dest++ = *temp++;
	}
	return (dest);
}

#include <stdio.h>

int main(void)
{
	char        buffer[50] = "Hello, 42!";
	const char  str[50] = "Heeeyyyy, Wordld!";
	size_t n = 0;

	printf("%p\n", (ft_memmove(buffer, str, n)));
   	printf("%s\n", buffer);
	return (0);
}
