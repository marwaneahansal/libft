#include "libft.h"
#include <strings.h>
#include <stdio.h>

int main(void)
{
	//char str[19] = "This is an example";
	char str1[19] = "This is an example";
	//printf("memmove: %s\n", memmove(str + 7, str, 10));
	printf("ft_memmove: %s\n", ft_memmove(str1 + 7, str1, 10));
	// 
	// move 10 bytes of 'This is an example' to ' an example'
	// dst => ' an example'
	// src => 'This is an'
	// res => 'This is ane'
	return (0);
}
