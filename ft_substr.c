/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 07:57:59 by mahansal          #+#    #+#             */
/*   Updated: 2022/10/24 04:40:40 by mahansal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	index;
	char			*substring;
	size_t			s_len;
	unsigned long long			tmp_len;

	index = 0;
	s_len = 0;
	tmp_len = 0;
	if (s == 0)
		return (0);
	s_len = ft_strlen(s);
	while (s[tmp_len] != '\0' && tmp_len < len)
		tmp_len++;
	substring = malloc((tmp_len + 1) * sizeof(char));
	if (substring == 0)
		return (0);
	if (start < s_len)
	{
		while (s[start] != '\0' && index < len)
		{
			substring[index] = s[start];
			index++;
			start++;
		}
	}
	substring[index] = '\0';
	return (substring);
}
