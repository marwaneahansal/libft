#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
int main(void)
{
	int Rfd = open("ft_putchar_fd_test.txt", 1);
	// int Rfd = open("ft_putchar_fd_test.txt", 0);
	if (Rfd == -1)
	{
		printf("file not found\n");
		exit(1);
	}
	printf("write to the file fd => %d\n", Rfd);
	int n = 0;
	ft_putnbr_fd(n, Rfd);
	return (0);
}
