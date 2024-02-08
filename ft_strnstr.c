/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inkahar <inkahar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:02:59 by inkahar           #+#    #+#             */
/*   Updated: 2023/11/24 19:32:35 by inkahar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *n, size_t len)
{
	size_t	i;
	size_t	o;

	o = 0;
	i = 0;
	if (len == 0 && !hay)
		return (NULL);
	if (n[i] == '\0')
		return ((char *)hay);
	while (hay[o] && o < len)
	{
		i = 0;
		while (hay[o + i] == n[i] && n[i] != '\0' && o + i < len)
		{
			i++;
		}
		if (n[i] == '\0')
		{
			return ((char *)&hay[o]);
		}
		o++;
	}
	return (NULL);
}
