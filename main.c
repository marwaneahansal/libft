#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main(void)
{
	char src[10] = "Hello 1337";
	char *dst1 = strdup(src);
	char *dst2 = ft_strdup(src);

	printf("dst1: %s\n", dst1);
	printf("dst2: %s\n", dst2);
	
}
