/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 07:42:25 by mahansal          #+#    #+#             */
/*   Updated: 2022/10/27 03:04:22 by mahansal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
	t_list *s1 = ft_lstnew("s1");
	t_list *s2 = ft_lstnew("s2");

	ft_lstadd_front(&s1, s2);
	t_list *last = ft_lstlast(s2);
	printf("last content ==> %s\n", last->content);
}
