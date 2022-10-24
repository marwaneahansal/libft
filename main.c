#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>

void *toupperStr(void *s)
{
	char *s1 = (char *) s;
	int index = 0;
	char *str = malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (!str)
		return (0);
	while(s1[index] != '\0')
	{
		if (s1[index] >= 97 && s1[index] <= 122)
		{
			str[index] = s1[index] - 32;
		}
		index++;
	}
	str[index] = '\0';
	return (str);
}

void deleteNodeContent(void *str)
{
	free(str);
}

int main(void)
{
	return (0);
}
