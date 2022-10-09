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
    size_t  dst_len;
    size_t  index;
    size_t  len;

    dst_len = ft_strlen(dst);
    index = dst_len;
    len = 0;
    if (dstsize > 0 && dstsize >= dstsize - dst_len - 1)
    {
        while (src[len] != '\0' && len <= dstsize - dst_len - 1)
        {
            dst[index] = src[len];
            len++;
            index++;
        }
        dst[len] = '\0';
    }
    return (dst_len + ft_strlen(src));
    //return (ft_strlen(dst));
}
