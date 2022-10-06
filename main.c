#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	printf("--- char 'a' ---\n");
	printf("ft_isalpha: %d\n", ft_isalpha('a'));
	printf("isalpha: %d\n", isalpha('a'));

	printf("--- char '\\' ---\n");
	printf("ft_isalpha: %d\n", ft_isalpha('\\'));
	printf("isalpha: %d\n", isalpha('\\'));


	return (0);
}
