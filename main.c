#include "libft.h"
#include <string.h>
#include <stdio.h>

int main(void)
{
	char src[] = "abbbbbbbb";
	printf("strrchr: %s\n", strrchr(src, 'a'));
	printf("ft_strrchr: %s\n", ft_strrchr(src, 'a'));
	return (0);
}
