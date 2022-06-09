/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 12:15:04 by dmatavel          #+#    #+#             */
/*   Updated: 2022/06/09 18:38:37 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

int	ft_atoi(const char *str)
{
	int	index;
	int	sign;
	int	base;

	index = 0;
	sign = 1;
	base = 0;
	while (ft_isspace(str[index]))
		index++;
	if (str[index] == '-' || str[index] == '+')
		sign = 1 - 2 * (str[index++] == '-');
	while (ft_isdigit(str[index]))
	{
		if (base > INT_MAX / 10 || (base == INT_MAX / 10
				&& str[index] - '0' > 7))
		{
			if (sign == 1)
				return (INT_MAX);
			else
				return (INT_MIN);
		}
		base = base * 10 + str[index] - '0';
		index++;
	}
	return (sign * base);
}
