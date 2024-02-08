/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inkahar <inkahar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:04:49 by inkahar           #+#    #+#             */
/*   Updated: 2023/11/24 19:36:30 by inkahar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*a;
	char	*b;

	a = (char *)dst;
	b = (char *)src;
	if (a > b)
	{
		a += len - 1;
		b += len - 1;
		while (len > 0)
		{
			*a = *b;
			a--;
			b--;
			len--;
		}
	}
	else if (a < b)
	{
		ft_memcpy(a, b, len);
	}
	return (dst);
}
