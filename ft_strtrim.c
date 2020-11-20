/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 20:04:46 by vfurr             #+#    #+#             */
/*   Updated: 2020/11/20 19:21:14 by vfurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int start;
	size_t len;
	size_t alen;

	if (!s1 || !set)
		return NULL;
	alen = 0;
	start = 0;
	len = ft_strlen(s1);
	
	while (ft_strchr(set, s1[start]))
		   start++;
	while (ft_strchr(set, s1[len]))
		len--;
	alen++;
	return (ft_substr(s1, start, len - start - alen + 2));
} 
