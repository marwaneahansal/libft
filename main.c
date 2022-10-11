#include "libft.h"
#include <string.h>
#include <stdio.h>

int main(void)
{
	char s1[] = "\x12\xff\x65\x12\xbd\xde\xad";
	char s2[] = "\x12\x02";
	printf("strncmp: %d\n", strncmp(s1, s2, sizeof(s2) - 1));
	printf("ft_strncmp: %d\n", ft_strncmp(s1, s2, sizeof(s2) - 1));
	return (0);
}
