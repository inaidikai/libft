/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inkahar <inkahar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 12:43:47 by inkahar           #+#    #+#             */
/*   Updated: 2023/11/24 19:33:07 by inkahar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	const char	*s;
	size_t		i;
	size_t		u;
	size_t		t;

	i = 0;
	u = 0;
	s = src;
	if (n == 0)
		return (ft_strlen(s));
	while (dst[i] && i < n)
		i++;
	if (i >= n)
		return (n + ft_strlen(s));
	else
		t = i + ft_strlen(s);
	while (s[u] && i < n - 1)
	{
		dst[i] = s[u];
		u++;
		i++;
	}
	dst[i] = '\0';
	return (t);
}
