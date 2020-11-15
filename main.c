/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 18:57:27 by vfurr             #+#    #+#             */
/*   Updated: 2020/11/14 19:35:04 by vfurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <string.h>
#include <ctype.h>

int main ()
{
	char a[10]="avva"; 
	//char dst[] = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
	char src[] = "abc"; 


	//int a = 65;
printf("%zu", strlcat(a, src, 1));
// memmove(dst, src, 3);
	printf("%s", a);
//	printf("%c", '\n;';);
//printf("%lu", strlen(a));

// memmove(dst, src, 3);


// printf ("%s", dst);
 return 0;
}
