/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 15:56:37 by dmatavel          #+#    #+#             */
/*   Updated: 2022/05/17 16:44:02 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	letter;
	size_t	len;

	letter = c;
	len = ft_strlen(s) + 1;
	while (s[len] != letter && s[len] > -1)
	{
		if (s[len] == letter)
			return ((char *)s);
		len--;
	}
	return (NULL);
}

int	main(void)
{
	const char	string[] = "Hello, World!";
	int	to_find = 'o';

	printf("%s\n", (strrchr(string, to_find)));
			return (0);	
}
