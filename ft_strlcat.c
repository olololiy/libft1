/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 16:40:56 by vfurr             #+#    #+#             */
/*   Updated: 2020/11/14 19:46:26 by vfurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	char *ssrc = (char*)src;
	 while (*dst != '\0' && size != 0)
 {
	 size--;
	 dst++;

 }
 while (*ssrc != '\0' && size != 0)
 {
	 *dst = *ssrc;
	 dst++;
	 ssrc++;
	 size--;

 }
 if (size != 0)
	*dst='\0';

 return (ft_strlen(src) + );
}
