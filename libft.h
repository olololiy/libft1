/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 19:21:35 by vfurr             #+#    #+#             */
/*   Updated: 2020/11/17 22:46:59 by vfurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NAME_H
#define NAME_H

#include <stdio.h>
#include <stdlib.h>
void *ft_memset(void *s, int c, size_t n);
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memccpy(void *dst, const void *src, int c, size_t n);
void *ft_memmove(void *dst, const void *src, size_t len);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
size_t	ft_strlen(char *str);
int ft_isalpha(int c);
int ft_isdigit(int c);
void *ft_strrchr(const void *s, int c);
size_t ft_strlcpy (char *dst, const char *src, size_t size);
size_t ft_strlcat(char *dst,  char *src, size_t size);
char *ft_strnstr( char *haystack,  char *needle, size_t len);
char *ft_strdup(const char *s1);
	/*
char *strcpy(char *dest, const char *src);
strlcat(char *dst, const char *src, size_t size);*/

#endif //NAME_H

