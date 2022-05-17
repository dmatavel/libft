/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 20:20:01 by dmatavel          #+#    #+#             */
/*   Updated: 2022/05/16 21:32:01 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	i = 0;

	while ((*s1++ == *s2++) || ((*s1++ != '\0' && *s2++ != '\0') && (i++ < n)));
	return (*s1 - *s2);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	first[] = "Abrakadabra";
	char	last[] = "abrakadabra";
	size_t size;

	size = 20;
	printf("%d\n", (ft_strncmp(first, last, size)));
	return (0);
}
