/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 12:07:54 by vfurr             #+#    #+#             */
/*   Updated: 2020/11/19 22:58:00 by vfurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *g;
	unsigned char *h;

	g = (unsigned char*)dst;
	h = (unsigned char*)src;
	if (!dst && !src)
		return (NULL);
	while (n--)
	{
		*g++ = *h++;
	}
	return (dst);
}
