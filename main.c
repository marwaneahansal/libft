#include "libft.h"
#include <string.h>
#include <stdio.h>

int main(void)
{
	//char s1[] = "abcdefg";
	char s1[] = "/|\x12\xff\x09\x42\2002\42|\\";

	printf("memchr: %s\n", memchr(s1, '\200', 10));
	printf("ft_memchr: %s\n", ft_memchr(s1, '\200', 10));
}
