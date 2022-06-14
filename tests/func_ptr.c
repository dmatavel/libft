#include <stdio.h>
#include <unistd.h>

char ft_fun(unsigned int i, char c)
{
	i = 0;
	while (i < 10)
	{
		printf("%d\n", i);
		write(1, &c, 1);
		i++;
	}
	return (0);
}

int main(void)
{
	char    (*f)(unsigned int, char) = ft_fun;
	f(5, 'a');
	return (0);
}
