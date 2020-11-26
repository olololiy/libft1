/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 00:30:29 by vfurr             #+#    #+#             */
/*   Updated: 2020/11/26 00:30:35 by vfurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*result;
	unsigned int	i;
	int				len;

	i = 0;
	if (!s || !f)
		return (0);
	len = ft_strlen(s) + 1;
	if (!(result = malloc(sizeof(char) * (len))))
		return (0);
	while (len != 1)
	{
		result[i] = (*f)(i, s[i]);
		i++;
		len--;
	}
	result[i] = '\0';
	return (result);
}
