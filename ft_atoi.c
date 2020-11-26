/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 22:23:37 by vfurr             #+#    #+#             */
/*   Updated: 2020/11/25 22:04:44 by vfurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*emptychar(char *s)
{
	while ((*s >= 9 && *s <= 13) || *s == ' ')
		s++;
	return (s);
}

char	*skipzero(char *s)
{
	while (*s == '0')
		s++;
	return (s);
}

int		onlydigit(char *s)
{
	int (result);

	result = 0;
	while (*s > 47 && *s < 58)
	{
		result = result * 10 + (*s - '0');
		s++;
	}
	return (result);
}

int		ft_atoi(const	char *str)
{
	char	*s;
	int		neg;
	int		result;

	result = 0;
	neg = 1;
	s = (char*)str;
	s = emptychar(s);
	if (!s)
		return (0);
	if (*s == '-')
	{
		neg = -1;
		s++;
	}
	else if (*s == '+')
		s++;
	s = skipzero(s);
	result = onlydigit(s);
	return (result * neg);
}
