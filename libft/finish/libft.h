/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:12:24 by vharatyk          #+#    #+#             */
/*   Updated: 2023/10/19 14:49:26 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stddef.h>

//size_t		ft_strlcat(char *s1, const char *s2, size_t n);
void		*ft_memset(void *str, int value, size_t count);
void		ft_bzero(void *str, size_t count);
void		*ft_memchr(const void *memoryBlock, int searchedChar, size_t size);
void		*ft_memcpy(void *dest, const void *src, size_t num);
void		*ft_memmove(void *dst, const void *src, size_t len);
char		*ft_strchr(const char *string, int searchedChar);
char		*ft_strrchr(char const *str, int c);
int			ft_isalpha(int character);
int			ft_isdigit(int nb);
int			ft_tolower(int chara);
int			ft_atoi(const char *str );
int			ft_isalnum(int character);
int			ft_isascii(int charactere);
int			ft_isprint(int character);
int			ft_strlen(char *str);
int			ft_memcmp(const void *pointer1, const void *pointer2, size_t size );
int			ft_strncmp(char *s1, char *s2, size_t n);
int			ft_memcmp(const void *pointer1, const void *pointer2, size_t size );
//ft_strnstr
//ft_strlcpy
//ft_strlcat
#endif
