#include "libft.h"
#include <string.h>
#include <stdio.h>

int main(void)
{
	char src[] = "test test";
	char *dst1 = NULL;
	char *dst2 = NULL;
	printf("strlcat: %zu\n", strlcat(dst1, src, 0));
	printf("ft_strlcat: %zu\n", ft_strlcat(dst2, src, 0));
	printf("dst1: %s\n", dst1);
	printf("dst2: %s\n", dst2);
	return (0);
}
