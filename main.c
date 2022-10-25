/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 07:42:25 by mahansal          #+#    #+#             */
/*   Updated: 2022/10/25 00:57:11 by mahansal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>

int	main(void)
{
	char *str = ft_calloc(SIZE_MAX, 0);
	char *str2 = calloc(SIZE_MAX, 0);
	printf("%s\n", str);
	printf("%s\n", str2);
	return (0);
}
