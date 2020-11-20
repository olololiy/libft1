/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 16:40:56 by vfurr             #+#    #+#             */
/*   Updated: 2020/11/19 19:15:10 by vfurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	char *ssrc;
	i = 0;
	ssrc = (char*)src;	
	if (size<=ft_strlen(dst))
		return(ft_strlen(src)+size);
	while(dst[i] != '\0')
	{
		i++;
		size--;	
	}
	while (*ssrc != '\0' && size >1 )
	{
		dst[i]=*ssrc;
		ssrc++;
		i++;
		size--;
	}
	if (size == 1 || *ssrc == '\0' )
	dst[i] = '\0';
	return (ft_strlen(dst) + ft_strlen(ssrc));
}
