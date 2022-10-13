#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main(void)
{
	// char s1[] = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n  ";
	// char set[] = " \n\t";
	char *s1 = "  \t \t \n   \n\n\n\t";
	char *set = " \n\t";
	char *result = ft_strtrim(s1, set); 

	printf("%s\n", result);
}
