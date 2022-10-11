#include "libft.h"
#include <string.h>
#include <stdio.h>

int main(void)
{
	char s1[] = "abbbbbbbbd";
	char s2[] = "abbbbbbbb";
	printf("memcmp: %d\n", memcmp(s1, s2, sizeof(s1)));
	printf("ft_memcmp: %d\n", ft_memcmp(s1, s2, sizeof(s1)));
	return (0);
}
