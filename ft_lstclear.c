/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 03:40:17 by mahansal          #+#    #+#             */
/*   Updated: 2022/10/21 03:52:16 by mahansal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void	*))
{
	while (*lst)
	{
		del((*lst)->content);
		free(*lst);
		*lst = (*lst)->next;
	}
	free(*lst);
	lst = 0;
}
