/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:22:56 by vharatyk          #+#    #+#             */
/*   Updated: 2023/10/19 14:27:27 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t num)
	{
	char	*destin;

	destin = (char *)dest;
	while (num != 0)
	{
		*(char *) destin = *(char *) src;
		destin++;
		src++;
		num--;
	}
	return (dest);
}
/*
#include<stdio.h>
#include<string.h>
int main (void){
	char dest[]  = "aaaaaaa";
	char dest1[] = "aaaaaaa";
	char src[] = "test";

	
	memcpy(dest,src,0);
	printf("%s\n",dest);

	//ft_memcpy(dest1 , src , -1);
	printf("%s",dest1);
	
	return 0 ;
}*/
