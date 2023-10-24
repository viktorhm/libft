/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:12:24 by vharatyk          #+#    #+#             */
/*   Updated: 2023/10/24 09:06:51 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include<stdio.h>

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stddef.h>

size_t		ft_strlcat(char *dest,const char *src, size_t size);
size_t		ft_strlcpy(char *dst, const char *src, size_t size);
size_t		ft_strlen(const char *str);
void		*ft_memset(void *str, int value, size_t count);
void		ft_bzero(void *str, size_t count);
void		*ft_memchr(const void *memoryBlock, int searchedChar, size_t size);
void		*ft_calloc(size_t elementCount, size_t elementSize);
void		*ft_memcpy(void *dest, const void *src, size_t num);
void		*ft_memmove(void *dst, const void *src, size_t len);
char		*ft_strdup(const char *s);
char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(char const *str, int c);
char		*ft_strnstr(const char *big, const char *little, size_t len);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char 		*ft_strtrim(char const *s1, char const *set);
char		*ft_itoa(int n);
int			ft_isalpha(int c);
int			ft_isdigit(int nb);
int			ft_tolower(int chara);
int			ft_toupper(int chara);
int			ft_atoi(const char *str );
int			ft_isalnum(int character);
int			ft_isascii(int charactere);
int			ft_isprint(int character);
int			ft_strncmp(char *s1, char *s2, size_t n);
int			ft_memcmp(const void *pointer1, const void *pointer2, size_t size );
//ft_strnstr
//ft_strlcpy
//ft_strlcat

#endif
