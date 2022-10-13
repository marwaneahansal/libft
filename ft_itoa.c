/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 05:01:48 by mahansal          #+#    #+#             */
/*   Updated: 2022/10/13 20:24:35 by mahansal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char    *ft_itoa(int n)
{
    int     digit_size;
    int     number;
    int     sign;
    int     index;
    char    *num_str;

    digit_size = 1;
    sign = 0;
    index = 0;
    if (n == 0)
    {
        num_str = ft_strdup("0");
        if (num_str == 0)
            return (0);
        return (num_str);
    }
    if (n == -2147483648)
    {
        num_str = ft_strdup("-2147483648");
        if (num_str == 0)
            return (0);
        return (num_str);
    }
    if (n < 0)
    {
        n *= -1;
        sign = 1;
    }
    number = n / 10;
    while (number > 9)
    {
        number = number / 10;
        digit_size++;
    }
    num_str = malloc((digit_size + sign + 2) * sizeof(char));
    if (num_str == 0)
        return (0);
    index = digit_size + sign;
    while (index >= 0)
    {
        if (sign == 1 && index == 0)
            num_str[0] = '-';
        else {
            num_str[index] = n % 10 + '0';
            n = n / 10;
        }
        index--;
    }
    num_str[digit_size + sign + 1] = '\0';
    return (num_str);
}
