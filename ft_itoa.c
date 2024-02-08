/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inkahar <inkahar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 10:11:18 by inkahar           #+#    #+#             */
/*   Updated: 2023/11/24 19:38:49 by inkahar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long int	rerere(int n)
{
	int	y;

	y = 0;
	if (n <= 0)
	{
		y = 1;
	}
	while (n != 0)
	{
		y++;
		n = n / 10;
	}
	return (y);
}

char	*ft_itoa(int n)
{
	char			*num;
	long int		y;
	unsigned int	h;

	h = 0;
	y = rerere(n);
	num = (char *)malloc((y + 1) * sizeof(char));
	if (!num)
		return (NULL);
	if (n == 0)
		num[0] = '0';
	num[y--] = '\0';
	if (n < 0)
	{
		num[0] = '-';
		h = n * -1;
	}
	else
		h = n;
	while (h > 0)
	{
		num[y--] = (h % 10) + '0';
		h = h / 10;
	}
	return (num);
}
