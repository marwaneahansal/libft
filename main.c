#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main(void)
{
	char str[] = "01234";
	char *substring = ft_substr(str, 10, 10); 

	printf("%s\n", substring);
}
