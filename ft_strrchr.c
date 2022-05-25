/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 15:56:37 by dmatavel          #+#    #+#             */
/*   Updated: 2022/05/20 15:56:17 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	while (s[len--] != (char)c)
	{
		if (s[len] == (char)c)
			return ((char *)s);
	}
	return (NULL);
}

/*
int	main(void)
{
	const char	string[] = "Hello, World!";
	int	to_find = 'k';

	printf("%s\n", (ft_strrchr(string, to_find)));
			return (0);	
}
*/
