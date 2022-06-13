/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 13:46:33 by dmatavel          #+#    #+#             */
/*   Updated: 2022/06/13 19:33:07 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	start;
	unsigned int	last;
	size_t			len;
	
	start = 0;
	while (s1[start] != '\0' && (ft_strchr(set, s1[start]) != NULL))
		start++;
	last = ft_strlen(s1);
	while (ft_strchr(set, s1[last]) != NULL)
			last--;
	len = 
	return (ft_substr(s1, start, len));
}
int	main(void)
{
	char	s1[] = "hello, world";
	char	s2[] = "hed";

	printf("%s\n", (ft_strtrim(s1, s2)));
	return (0);
}
