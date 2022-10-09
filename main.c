#include "libft.h"
#include <string.h>
#include <stdio.h>

int main(void)
{
	char dst1[4] = "";
	char dst2[4] = "";
	char src[] = "thx to ntoniolo for this test !";
	printf("strlcat res: %zu\n", strlcat(dst1, src, 4));
	printf("ft_strlcat res: %zu\n", ft_strlcat(dst2, src, 4));
	printf("dst1: %s\n", dst1);
	printf("dst2: %s\n", dst2);
	return (0);
}
