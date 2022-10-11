/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 07:27:33 by mahansal          #+#    #+#             */
/*   Updated: 2022/10/11 07:37:08 by mahansal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char    *ft_strdup(const char *s1)
{
    char    *dst;
    int     index;

    dst = (char *) malloc(sizeof(s1));
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