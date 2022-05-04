/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 16:20:59 by dmatavel          #+#    #+#             */
/*   Updated: 2022/04/04 16:58:34 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	destlen = ft_strlen(dest);
	unsigned int	i;
	
	i = 0;
	while (i < nb && src[i] != '\0')
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen +i] = '\0';
	return (dest);
}

#include <stdio.h>

int	main(void)
{
	char	str1[15] = "Hello, World!";
	char	str2[50] = "Hello!";

	printf("%s", ft_strncat(str2, str1, 13));
	return (0);
}
