/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 07:57:59 by mahansal          #+#    #+#             */
/*   Updated: 2022/10/12 07:27:52 by mahansal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    unsigned int    index;
    char            *substring;
    size_t          s_len;

    index = 0;
    s_len = ft_strlen(s);
    substring = malloc((len + 1) * sizeof(char));
    if (substring == 0)
        return (0);
    if (start <= s_len)
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