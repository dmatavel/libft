/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 20:20:01 by dmatavel          #+#    #+#             */
/*   Updated: 2022/06/14 18:02:36 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n--)
	{
		if (*s1++ != *s2++)
		{
			return (*(unsigned char *)(s1 - 1) - *(unsigned char *)(s2 - 1));
		}
		if (*s1 == '\0' || *s2 == '\0')
			return (0);
	}
	return (0);
}
