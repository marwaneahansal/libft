#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main(void)
{
	char s1[] = "abcadba";
	char s2[] = "acb";
	char *result = ft_strjoin(s1, s2); 
	printf("%s\n", result);
}
