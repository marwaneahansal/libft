#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void	strtoupper(unsigned int index, char *c)
{
	(void) index;
	if (*c >= 97 && *c <= 122)
		*c = *c - 32;
}

int main(void)
{
	char s[] = "hEllo";

	ft_striteri(s, strtoupper);

	printf("ft_itoi: %s\n", s);
}
