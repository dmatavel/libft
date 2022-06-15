/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 21:54:40 by dmatavel          #+#    #+#             */
/*   Updated: 2022/06/15 14:59:35 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

static int	ft_cntwrd(char const *s, char c)
{
	unsigned int	i;
	int				cntr;

	i = 0;
	cntr = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			cntr++;
		while (s[i] && (s[i] != c))
			i++;
	}
	return (cntr);
}

static char	*ft_strndup(const char *s, size_t n)
{
	char	*str;

	str = (char *)ft_calloc(sizeof(char), n + 1);
	if (!str)
		return (NULL);
	ft_strncpy(str, s, n);
	str[n] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**tab;

	i = 0;
	k = 0;
	tab = (char **)ft_calloc(sizeof(char *), (ft_cntwrd(s, c)) + 1);
	if (!tab)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > j)
		{
			tab[k] = ft_strndup(s + j, i - j);
			k++;
		}
		tab[k] = NULL;
	}
	return (tab);
}

/*
#include <stdio.h>

int main(void)
{
	char	*str = "hello, world, hello 42";
	char	**mat = ft_split(str, ' ');
	int		i;

	i = 0;
	while (i < 5)
	{
		printf("%s\n", mat[i]);
		i++;
	}
	return (0);
}
*/
