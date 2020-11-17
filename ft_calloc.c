/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 18:58:43 by vfurr             #+#    #+#             */
/*   Updated: 2020/11/17 21:23:43 by vfurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
	char *p;
	if (!count && size!=0)
	return 0;	
	if (!(p=malloc(size*count)))
		return 0;
	ft_bzero(p, count*size);	
	return p;

	
}
