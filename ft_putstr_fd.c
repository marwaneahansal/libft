/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 01:57:55 by mahansal          #+#    #+#             */
/*   Updated: 2022/10/14 01:59:53 by mahansal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void    ft_putstr_fd(char *s, int fd)
{
    size_t  index;

    index = 0;
    while (s[index] != '\0')
    {
        write(fd, &s[index], 1);
        index++;
    }
}
