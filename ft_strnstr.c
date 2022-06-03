/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 05:17:41 by dmatavel          #+#    #+#             */
/*   Updated: 2022/06/03 06:14:00 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

const char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t n;
	
	n = len;
	if (n == 0)
	if (*little == '\0')
		return (big);
	while (n--)
	{
		if (*big++ != *little++)
			return (NULL);
		else if (*big == '\0')
			return (0);
	}
	return ((char *)little);
}
