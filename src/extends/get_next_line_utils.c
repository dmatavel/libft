/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 18:40:34 by dmatavel          #+#    #+#             */
/*   Updated: 2023/02/27 11:13:19 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/get_next_line.h"

int	find_newline(char *s)
{
	int	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
	{
		if (s[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

char	*ft_gnljoin(char *stock, char *buf)
{
	char	*new_stock;

	if (!stock || !buf)
		return (NULL);
	new_stock = malloc(sizeof(char) * (ft_strlen(stock) + ft_strlen(buf)) + 1);
	if (!new_stock)
		return (NULL);
	ft_strcpy(new_stock, stock);
	ft_strcat(new_stock, buf);
	new_stock[ft_strlen(new_stock)] = '\0';
	free(stock);
	return (new_stock);
}
