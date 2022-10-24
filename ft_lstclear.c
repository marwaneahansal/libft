/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 03:40:17 by mahansal          #+#    #+#             */
/*   Updated: 2022/10/24 04:47:42 by mahansal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void	*))
{
	t_list	*tmp;
	t_list	*tmp2;	

	if (del && lst)
	{
		tmp = *lst;
		while (tmp)
		{
			tmp2 = tmp->next;
			del(tmp->content);
			free(tmp);
			tmp = tmp2;
		}
		*lst = 0;
	}
}