/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inkahar <inkahar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 14:15:14 by inkahar           #+#    #+#             */
/*   Updated: 2023/11/24 19:37:00 by inkahar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*src;
	unsigned char		uc;
	size_t				i;

	src = s;
	uc = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (src[i] == uc)
		{
			return ((void *)(src + i));
		}
		i++;
	}
	return (NULL);
}
