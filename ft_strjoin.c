/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 20:30:00 by vfurr             #+#    #+#             */
/*   Updated: 2020/11/26 00:40:44 by vfurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	lens1;
	size_t	lens2;
	char	*b;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (0);
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	b = (char *)malloc(sizeof(char) * (lens1 + lens2 + 1));
	if (!b)
		return (0);
	while (s1[i] != '\0')
	{
		b[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
		b[i++] = s2[j++];
	b[i] = '\0';
	return (b);
}
