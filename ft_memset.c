/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 23:02:56 by mahansal          #+#    #+#             */
/*   Updated: 2022/10/24 08:47:58 by mahansal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	length;
	char	*str;

	length = 0;
	str = b;
	while (length < len)
	{
		str[length] = (unsigned char) c;
		length++;
	}
	return (b);
}
