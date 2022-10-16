/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 19:58:19 by mahansal          #+#    #+#             */
/*   Updated: 2022/10/17 00:41:01 by mahansal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char    *get_word(char const *s, char c)
{
    size_t  s_len;
    char    *word;
    size_t  index;

    s_len = 0;
    index = 0;
    while (s[s_len] != '\0' && s[s_len] != c)
        s_len++;
    word = malloc(s_len * sizeof(char) + 1);
    if (word == 0)
        return (0);
    while (index < s_len)
    {
        word[index] = s[index];
        index++;
    }
    word[index] = '\0';
    return (word);
}

char    **ft_split(char const *s, char c)
{
    size_t  index;
    size_t  word_count;
    size_t  str_index;
    char    **str;

    index = 0;
    word_count = 0;
    if (s == 0)
        return (0);
    while (s[index] != '\0')
    {
        while (s[index] != '\0' && s[index] == c)
            index++;
        if (s[index] != '\0')
            word_count++;
        while (s[index] != '\0' && s[index] != c)
            index++;
    }
    str = malloc(word_count * sizeof(char *) + 1);
    if (str == 0)
        return (0);
    index = 0;
    str_index = 0;
    while (s[index] != '\0' && str_index < word_count)
    {
        while (s[index] != '\0' && s[index] == c)
            index++;
        if (s[index] != '\0')
        {
            str[str_index] = get_word(s + index, c);
            str_index++;
        }
        while (s[index] != '\0' && s[index] != c)
            index++;
    }
    str[str_index] = 0;
    return (str);
}