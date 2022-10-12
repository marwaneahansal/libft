/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 23:49:38 by mahansal          #+#    #+#             */
/*   Updated: 2022/10/12 07:22:13 by mahansal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

#include <stdio.h>
size_t  check_set_start(char const *s1, char const *set, size_t char_count)
{
    size_t  index;
    index = 0;
    while (s1[index] != '\0')
    {
        if (set[0] == s1[index])
        {
            char_count++;
        }
        index++;
    }
    return (char_count);
}

// size_t  check_set_end(char const *s1, char const *set, size_t s1_len, size_t set_len)
// {
//     size_t  char_count;
//     size_t  s1_len;
//     size_t  set_len;

//     char_count = 0;
//     while (set[index] != '\0' && s1[index] != '\0')
//     {
//         if (set[index] == s1[index])
//         {
//             char_count++;
//             index++;
//         } else {
//             return char_count;
//         }
//     }
//     return (char_count);
// }

char    *ft_strtrim(char const *s1, char const *set)
{
    size_t  set_len;
    size_t  s1_len;
    size_t  char_count;
    size_t  set_index;
    size_t  s1_index;


    set_len = ft_strlen(set);
    s1_len = ft_strlen(s1);
    set_index = 0;
    s1_index = 0;
    char_count = 0;

    // check for all charachters in set to get the char_count (in the start of s1)
    while (s1[s1_index] != '\0')
    {
        set_index = 0;
        while (set[set_index] != '\0')
        {
            // printf("s1[%zu] => %c\n", s1_index, s1[s1_index]);
            // printf("set[%zu] => %c\n", s1[set_index]);
            
            if (s1[s1_index] == set[set_index])
            {
                char_count++;
            }
            else
            {
                break;
            }
            set_index++;
        }
        s1_index++;
    }

    // check for all charachters in set to get the char_count (starting from the end of s1)
    while (s1_len > 0)
    {
        while (set[set_index] != '\0')
        {
            if (s1[s1_len] == set[set_index])
            {
                char_count++;
            }
            else
            {
                break;
            }
            set_index++;
        }
        s1_len--;
    }

    printf("%zu\n", char_count);


    return ((char *) s1);
}