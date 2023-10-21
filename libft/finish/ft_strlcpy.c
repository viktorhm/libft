/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viktor <viktor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 10:09:50 by vharatyk          #+#    #+#             */
/*   Updated: 2023/10/21 11:14:00 by viktor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;

	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen((char*)src));
}
/*
#include <string.h>
#include<stdio.h>
int main(void){
char dest[5];
char dest1[5];
char src[5]="test";
printf("%ld",strlcpy(dest , src , 5));
printf("%ld",ft_strlcpy(dest ,src,5));
return 0 ;
}*/

