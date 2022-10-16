/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 23:49:38 by mahansal          #+#    #+#             */
/*   Updated: 2022/10/17 00:35:34 by mahansal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int check_set_char(char const *set, char c)
{
    size_t  index;

    index = 0;
    while (set[index] != '\0')
    {
        if (c == set[index])
            return (1);
        index++;
    }
    return (-1);
}

char    *ft_strtrim(char const *s1, char const *set)
{
    int     index;
    int     start_char_count;
    int     end_char_count;
    int     s1_len;
    char    *trimmed_str;
    int     str_size;

    if (s1 == 0)
        return (0);
    s1_len = ft_strlen(s1);
    start_char_count = 0;
    end_char_count = 0;
    index = 0;
    // get the count of chars found in the begining of s1
    while (s1[index] != '\0' && check_set_char(set, s1[index]) == 1)
    {
        start_char_count++;
        index++;
    }

    // get the count of chars found in the end of s1
    index = s1_len - 1;
    while (s1[index] != '\0' && check_set_char(set, s1[index]) == 1)
    {
        end_char_count++;
        index--;
    }
    if (s1_len - (start_char_count + end_char_count) < -1)
    {
        str_size = 1;
    } else {
        str_size = s1_len - (start_char_count + end_char_count);
    }
    trimmed_str = malloc((str_size + 1) * sizeof(char));
    if (trimmed_str == 0)
        return (0);
        
    // start copying s1 from start to s1 len minus end_char_count
    index = 0;
    while (start_char_count < (s1_len - end_char_count))
    {
        trimmed_str[index] = s1[start_char_count];
        index++;
        start_char_count++;
    }
    trimmed_str[index] = '\0';
    return (trimmed_str);
}