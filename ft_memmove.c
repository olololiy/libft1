/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 13:16:48 by vfurr             #+#    #+#             */
/*   Updated: 2020/11/25 23:21:02 by vfurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*g;
	char	*h;

	g = (char*)dst;
	h = (char*)src;
	i = 0;
	if (!g && !h)
		return (NULL);
	if (g >= h)
		while (len)
		{
			g[len - 1] = h[len - 1];
			len--;
		}
	else
		while (len > 0)
		{
			g[i] = h[i];
			len--;
			i++;
		}
	return (g);
}
