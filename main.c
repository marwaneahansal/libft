#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
int main(void)
{
	int Rfd = open("ft_putchar_fd_test.txt", O_WRONLY);
	int Wfd = open("ft_putchar_fd_test.txt", O_RDONLY);
	// int Rfd = open("ft_putchar_fd_test.txt", 0);
	if (Rfd == -1)
	{
		printf("file not found\n");
		exit(1);
	}
	printf("write to the file fd => %d\n", Rfd);
	char s[] = "Hello World!";
	ft_putstr_fd(s, Rfd);
	char str[] = "";
	read(Wfd, str, 13);
	printf("str: %s\n", str);
	return (0);
}
