/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 12:15:04 by dmatavel          #+#    #+#             */
/*   Updated: 2022/06/09 14:09:51 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	index;
	int sign;
	int	base;

	index = 0;
	sign = 1;
	base = 0;
	while (str[index] == '\t' || str[index] == '\v' ||
			str[index] == '\r' || str[index] == '\f' ||
			str[index] == '\n' || str[index] == ' ')
	{
		index++;
	}
	if	(str[index] == '-' || str[index] == '+')
	{
		sign = 1 - 2 * (str[index++] == '-');
	}
	while (str[index] >= '0' && str[index] <= '9')
	{
		if (base > INT_MAX / 10 ||
				(base == INT_MAX / 10
				 && str[index] - '0' > 7))
		{
			if (sign == 1)
				return INT_MAX;
			else
				return INT_MIN;
		}
		base =  base * 10 + str[index] - '0';
		index++;
	}
	return (sign * base);
}
