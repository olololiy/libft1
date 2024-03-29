/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 21:14:15 by vfurr             #+#    #+#             */
/*   Updated: 2020/11/25 23:33:56 by vfurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	char	*ssrc;
	int		a;

	ssrc = (char*)src;
	a = 0;
	if (!dst)
		return (0);
	while (size > 1 && *ssrc != '\0')
	{
		*dst = *ssrc;
		dst++;
		ssrc++;
		size--;
		a++;
	}
	if (size != 0)
		*dst = '\0';
	return (ft_strlen(ssrc - a));
}
