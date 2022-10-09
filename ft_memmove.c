/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 01:47:45 by mahansal          #+#    #+#             */
/*   Updated: 2022/10/08 02:21:10 by mahansal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		length;
	char		*destination;
	const char	*source;

	if (dst == 0 && src == 0)
		return (0);

	length = 0;
	destination = (char *) dst;
	source = (char *) src;

	if (destination < source)
	{
		while (length < len)
		{	
			destination[length] = source[length];
			length++;
		}	
	} else {
		while (len > 0)
		{
			len--;
			destination[len] = source[len];
		}	
	}
	dst = destination;
	src = source;
	return (dst);
}
