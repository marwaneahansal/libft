/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 04:53:50 by mahansal          #+#    #+#             */
/*   Updated: 2022/10/09 04:53:52 by mahansal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    // size_t  dst_len;
    // size_t  index;
    // size_t  len;

    // dst_len = ft_strlen(dst);
    // index = dst_len;
    // len = 0;
    // if (dstsize > 0 && dstsize >= dstsize - dst_len - 1)
    // {
    //     while (src[len] != '\0' && len <= dstsize - dst_len - 1)
    //     {
    //         dst[index] = src[len];
    //         len++;
    //         index++;
    //     }
    //     dst[len] = '\0';
    // }
    // return (dst_len + ft_strlen(src));

	size_t	i;
	size_t	j;
	size_t	dest_size;
	size_t	src_size;

	i = 0;
	dest_size = ft_strlen(dst);
	src_size = ft_strlen(src);
	j = dest_size;
	if (dstsize > dest_size)
	{
		while (src[i] != '\0' && i < dstsize - dest_size - 1)
		{
			dst[j] = src[i];
			i++;
			j++;
		}
		dst[j] = '\0';
		return (dest_size + src_size);
	}
	return (src_size + dstsize);
}
