/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 04:40:13 by mahansal          #+#    #+#             */
/*   Updated: 2022/10/15 22:40:14 by mahansal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int is_whitespace(char c)
{
    if (c == 32 || (c >= 9 && c <= 13))
        return (1);
    return (-1);
}


int ft_atoi(const char *str)
{
    int index;
    int sign;
    int number;

    sign = 1;
    index = 0;
    number = 0;
    while (str[index] != '\0' && is_whitespace(str[index]) == 1)
        index++;

    if (str[index] == '-' || str[index] == '+')
    {
        if (str[index] == '-')
            sign = -1;
        index++;
    }

    while (str[index] != '\0' && str[index] >= '0' && str[index] <= '9')
    {
        number *= 10;
        number += str[index] - 48;
        index++;
    }
    return (number * sign);
    
}