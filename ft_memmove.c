/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 13:16:48 by vfurr             #+#    #+#             */
/*   Updated: 2020/11/10 20:12:52 by vfurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	char *g;
	const char *h;
	size_t i;
	g = (char*)dst;
	h = (const char*)src;
	i = 0;
	if (!g && !h)
		return (NULL);

	if (g >= h)
		while (len)
		{
			g[len - 1] = h[len - 1];
			//			printf("%s", " g>=h");
			len--;
		}

	else
		while(len>0)
		{
			//		printf("%s", " g<h");

			g[i]=h[i];
			len--;
			i++;
		}		

	return (g);

}
