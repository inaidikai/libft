/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inkahar <inkahar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:07:17 by inkahar           #+#    #+#             */
/*   Updated: 2023/11/24 16:54:10 by inkahar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*array;

	if (count != 0 && UINT32_MAX / count < size)
		return (NULL);
	array = ((void *)malloc(count * size));
	if (array == NULL)
		return (NULL);
	ft_bzero(array, (count * size));
	return (array);
}
