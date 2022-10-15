/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 01:02:50 by mahansal          #+#    #+#             */
/*   Updated: 2022/10/15 22:35:15 by mahansal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    size_t  index;

    index = 0;
    while (s[index] != '\0')
    {
        if (s[index] == (unsigned char) c)
            return ((char *) (s + index));
        index++;
    }
    if (s[index] == (unsigned char) c)
        return ( (char *)(s + index));
    return (0);
}