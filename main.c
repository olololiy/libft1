/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 18:57:27 by vfurr             #+#    #+#             */
/*   Updated: 2020/11/07 19:46:25 by vfurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <string.h>

int main ()
{
unsigned	char dst[15];
unsigned	char src[15] = "qwe5rt" ; 

	//int a = 65;
	//printf("%s", ft_memccpy(dst, src, '5', 5));
	ft_memccpy(dst, src, '5', 5);
	printf("%s", dst);
//	printf("%c", '\n');
//	printf("%s", "2fun ");
//  memccpy(dst, src, '5', 0);

//	printf ("%s", dst);
	return 0;
}	
