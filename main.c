#include "libft.h"
#include <string.h>
#include <stdio.h>

int main(void)
{
	char b[5] = "test"; 
	printf("memset: %s\n", memset(b, '2', 6));
	printf("ft_memset: %s\n", ft_memset(b, '2', 6));
	return (0);
}
