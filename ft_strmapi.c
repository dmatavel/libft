/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 16:48:45 by dmatavel          #+#    #+#             */
/*   Updated: 2022/06/14 17:58:34 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	 *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	return (NULL);
}
int main(void)
{
	char ft_fun(unsigned int i, char c)
	{
		i = 0;
		while (i++ < 10)
		{
			printf("%d\n", i);
			ft_putchar_fd(c, 1);
		}
	}

	char	(*f)(unsigned int, char) = &ft_fun;
	f(5, 'a');
	return (0);
}
/*
{
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++
	}
}

int	main(void)
{

	ft_strmapi("hello, world", mapi_test);
	return (0);
}

void	fun(char a)
{
	ft_putchar_fd(a, 1);
}

int	main(void)
{
	void	(*fun_ptr)(char);

	fun_ptr = &fun;
	fun_ptr('A');
	return (0);	
}
*/
