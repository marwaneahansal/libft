/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 01:03:06 by mahansal          #+#    #+#             */
/*   Updated: 2022/10/15 22:35:38 by mahansal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    int     index;

    index = ft_strlen(s);
    while (index >= 0)
    {
        if (s[index] == (unsigned char) c)
            return ((char *) (s + index));
        index--;
    }
    return (0);
}