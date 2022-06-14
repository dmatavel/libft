/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 13:46:33 by dmatavel          #+#    #+#             */
/*   Updated: 2022/06/14 05:08:37 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *   Description:
 *   ft_strtrim allocates (with malloc(3)) and returns a copy of 's1'
 *   with the characters specified in 'set' removed from the beginning
 *   and the end of the string.
 *   
 *   Parameters:
 *   's1' is the string to be trimmed and 'set' the reference set of
 *   characters to trim.
 *   
 *   Return values:
 *   The trimmed string or NULL if allocation fails.
 */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	start;
	unsigned int	last;
	unsigned int	start_i;
	unsigned int	last_i;
	size_t			len;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] != '\0' && (ft_strchr(set, s1[start]) != NULL))
		start++;
	last = ft_strlen(s1);
	while (ft_strchr(set, s1[last]) != NULL)
			last--;
	len = 0;
	start_i = start;
	last_i = last;
	while (start_i++ <= last_i)
		len++;
	return (ft_substr(s1, start, len));
}
