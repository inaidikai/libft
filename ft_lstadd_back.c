/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inkahar <inkahar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 19:20:44 by inkahar           #+#    #+#             */
/*   Updated: 2023/11/23 18:46:50 by inkahar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*u;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	u = *lst;
	while (u->next)
	{
		u = u->next;
	}
	u->next = new;
}
