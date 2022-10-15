#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
int main(void)
{
	char **res = ft_split("split  ||this|for|me|||||!|", '|');
	int i = 0;
	while(res[i]){
		printf("res => %s \n", res[i]);
		i++;
	}
	return (0);
}
