/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inkahar <inkahar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 10:03:28 by inkahar           #+#    #+#             */
/*   Updated: 2023/11/24 19:38:24 by inkahar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*yam;
	t_list	*u;

	if (!lst || !del)
	{
		return ;
	}
	yam = *lst;
	while (yam)
	{
		u = yam->next;
		del(yam->content);
		free(yam);
		yam = u;
	}
	*lst = NULL;
}
