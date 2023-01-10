/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stoarr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 12:52:50 by dmatavel          #+#    #+#             */
/*   Updated: 2023/01/10 12:54:32 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

int	*ft_stoarr(int size, char **str)
{
	int	i;
	int	j;
	int	*arr;

	i = 0;
	j = 1;
	arr = malloc(sizeof(int) * (size));
	if (arr == NULL)
		return (NULL);
	while ((size) != 0)
	{	
		arr[i++] = atoi(str[j++]);
		size--;
	}
	return (arr);
}
