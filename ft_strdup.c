/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 07:27:33 by mahansal          #+#    #+#             */
/*   Updated: 2022/10/27 02:32:00 by mahansal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dst;
	int		index;
	size_t	dst_len;

	dst_len = ft_strlen(s1);
	dst = (char *) malloc((dst_len * sizeof(char)) + 1);
	index = 0;
	if (dst == 0)
		return (0);
	while (s1[index] != '\0')
	{
		dst[index] = s1[index];
		index++;
	}
	dst[index] = '\0';
	return (dst);
}
