/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 16:40:56 by vfurr             #+#    #+#             */
/*   Updated: 2020/11/15 18:34:33 by vfurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst,  char *src, size_t size)
{
	size_t i;
	i = 0;
	if (size<=ft_strlen(dst))
		return(ft_strlen(src)+size);
	while(dst[i] != '\0')
	{
		i++;
		size--;	
	}
	while (*src != '\0' && size-1 > 0 )
	{
		dst[i]=*src;
		src++;
		i++;
		size--;
	}
	if (size == 0 || *src == '\0' )
	dst[i] = '\0';
	return (ft_strlen(dst) + ft_strlen(src));
}
