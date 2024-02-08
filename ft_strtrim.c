/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inkahar <inkahar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:36:18 by inkahar           #+#    #+#             */
/*   Updated: 2023/11/24 19:32:10 by inkahar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	tri(char const c, char const *e)
{
	while (*e)
	{
		if (c == *e)
			return (1);
		e++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		len;
	char	*t;

	start = 0;
	if (!s1)
		return (NULL);
	end = ft_strlen(s1)-1;
	while (tri(s1[start], set))
		start++;
	while (end > start && tri(s1[end], set))
		end--;
	len = end - start + 1;
	if (len <= 0)
	{
		t = (char *)malloc(1);
		*t = '\0';
		return (t);
	}
	return (ft_substr(s1, start, len));
}
