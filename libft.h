/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 19:21:35 by vfurr             #+#    #+#             */
/*   Updated: 2020/11/07 16:45:20 by vfurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NAME_H
#define NAME_H

#include <stdio.h>
void *ft_memset(void *s, int c, size_t n);
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memccpy(void *dst, const void *src, int c, size_t n);
/*void *memmove(void *dest, const void *src, size_t n);
void *memchr(const void *s, int c, size_t n);
int memcmp(const void *s1, const void *s2, size_t n);
size_t strlen(const char *s);
char *strcpy(char *dest, const char *src);
strlcat(char *dst, const char *src, size_t size);*/

#endif //NAME_H

