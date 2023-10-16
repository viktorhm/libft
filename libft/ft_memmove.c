/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 18:13:46 by vharatyk          #+#    #+#             */
/*   Updated: 2023/10/16 18:14:13 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<string.h>
void * ft_memmove ( void * dest, const void * src, int  num )
	{
	int j = 0 ;
	int i = 0 ;

	unsigned char *destin;

	destin = (char *)dest;
//boucle uselesse 
//	while(str[j] != '\0')
//		{
//		j++;
//	}
//overflow
	while(num != 0)
		{
		*(char *)destin =*(char *)src  ;
		destin++;
		src++;
		num--;
	}
	  return dest ;
}

int main (void){
	char dest[]  = "aaaaaaa";
	char dest1[] = "aaaaaaa";
	char src[] = "test";

	
	memmove(dest,src,6);
	printf("%s\n",dest);

	ft_memmove(dest1 , src , 6);
	printf("%s",dest1);
	
	return 0 ;
}
