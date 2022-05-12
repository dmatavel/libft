char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = -1;
	while (i < n - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n - 1)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

#include <stdio.h>
int	main(void)
{
	char	dest[13];
	ft_strncpy(dest, "Hello, World!", 13);
	printf("%s\n", dest);
}
