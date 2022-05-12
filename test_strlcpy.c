#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	strlcpy("hello, world", "hello, 42", 13);
	return (0);
}
