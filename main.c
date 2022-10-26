/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 07:42:25 by mahansal          #+#    #+#             */
/*   Updated: 2022/10/26 09:06:03 by mahansal         ###   ########.fr       */
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
	printf("ft_atoi %d\n", ft_atoi("9223372036854775806"));
	printf("atoi %d\n", atoi("9223372036854775806"));

	return (0);
}
