/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inkahar <inkahar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:24:52 by inkahar           #+#    #+#             */
/*   Updated: 2023/11/24 13:10:07 by inkahar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	b;
	size_t	i;
	char	*result;

	i = 0;
	b = 0;
	if (!s1)
		return ((char *)s1);
	if (!s2)
		return ((char *)s2);
	result = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!result)
		return (NULL);
	while (s1[i])
	{
		result[i] = s1[i];
		i++;
	}
	while (s2[b])
	{
		result[i + b] = s2[b];
		b++;
	}
	result[i + b] = '\0';
	return (result);
}
