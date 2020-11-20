/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 20:07:54 by vfurr             #+#    #+#             */
/*   Updated: 2020/11/19 21:50:17 by vfurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *g;
	unsigned char *h;

	g = (unsigned char*)dst;
	h = (unsigned char*)src;
	c = (unsigned char)c;
	while (n)
	{
		*g = *h;
		if (*h == c)
		{
			*g = *h;
			return (g + 1);
		}
		n--;
		g++;
		h++;
	}
	return (0);
}
