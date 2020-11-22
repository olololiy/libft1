cmake_minimum_required(VERSION 3.12)
project(libft C)

set(CMAKE_C_STANDARD 99)

include_directories(.)

add_executable(libft
        ft_atoi.c
        ft_bzero.c
        ft_calloc.c
        ft_isalnum.c
        ft_isalpha.c
        ft_isascii.c
        ft_isdigit.c
        ft_isprint.c
        ft_memccpy.c
        ft_memchr.c
        ft_memcmp.c
        ft_memcpy.c
        ft_memmove.c
        ft_memset.c
        ft_split.c
        ft_strchr.c
        ft_strdup.c
        ft_strjoin.c
        ft_strlcat.c
        ft_strlcpy.c
        ft_strlen.c
        ft_strncmp.c
        ft_strnstr.c
        ft_strrchr.c
        ft_strtrim.c
        ft_substr.c
        ft_tolower.c
        ft_toupper.c
        ft_itoa.c
        libft.h)
