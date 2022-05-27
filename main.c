#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
#include "libft.h"
#include <ctype.h>

int	main(void)
{
	int	r;

	r = ft_isalnum('h');
	if (r != 0)
		printf("The character is alphanum\n");
	else
		printf("The character is not alphanum\n");

	if (ft_isalnum('A') == isalnum('A'))
		printf("The functions are equal\n");
	printf("%d\n", (isalnum('A')));
	return (0);
}
