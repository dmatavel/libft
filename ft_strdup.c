/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 04:37:14 by dmatavel          #+#    #+#             */
/*   Updated: 2022/06/09 19:18:12 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ds;
	size_t	i;

	if (s == NULL)
		return (NULL);
	ds = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (ds == NULL)
		return (NULL);
	i = 0;
	while (i < (ft_strlen(s) + 1))
	{
		ds[i] = s[i];
		i++;
	}
	ds[i] = '\0';
	return (ds);
}
