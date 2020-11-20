/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 20:30:00 by vfurr             #+#    #+#             */
/*   Updated: 2020/11/19 19:56:51 by vfurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char *ft_strjoin(char const *s1, char const *s2)
{
	size_t lens1;
	size_t lens2;
	char *b;
	size_t i;
	size_t j;
	i = 0;
	j = 0;

	if (!s1 || !s2)
		return 0;
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	b = (char *)malloc(sizeof(char)*(lens1+lens2+1));
	if (!b)
		return 0;
	while (s1[i]!='\0')
	{	b[i]=s1[i];
		i++;
	}
	while (s2[j]!='\0')
	{
		b[i]=s2[j];
		i++;
		j++;
	}

	//ft_strlcat(b, s1, lens1 + 1);
//	ft_strlcat(b, s2, (lens2 + lens1 + 1)); 
	b[i] = '\0';
	return b;
}
/*int main()
{
	char *s1 = "where is my ";
	char *s2 = "malloc ???";
//	char *s3 = "where is my malloc ???";

//	char *res = ft_strjoin(s1, s2);
	printf("%s", ft_strjoin(s1, s2));
}*/
