/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inkahar <inkahar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:52:43 by inkahar           #+#    #+#             */
/*   Updated: 2023/11/24 19:33:19 by inkahar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strdup(const char *s1)
{
	char	*dest;
	size_t	t;
	size_t	o;

	o = ft_strlen(s1);
	t = 0;
	dest = (char *)malloc(o + 1 * sizeof(char));
	if (!dest)
	{
		return (NULL);
	}
	while (s1[t])
	{
		dest[t] = s1[t];
		t++;
	}
	dest[t] = '\0';
	return (dest);
}
