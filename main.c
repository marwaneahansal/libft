#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	strtoupper(unsigned int index, char c)
{
	(void) index;
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}
int main(void)
{
	char *s = "hello";

	char *result = ft_strmapi(s, strtoupper);

	printf("ft_itoi: %s\n", result);
}
