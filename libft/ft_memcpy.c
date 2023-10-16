/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:22:56 by vharatyk          #+#    #+#             */
/*   Updated: 2023/10/16 17:36:45 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<string.h>
void * ft_memcpy ( void * dest, const void * src, int  num )
{
int j = 0 ;
int i = 0 ;
unsigned char	*string;
string = dest;
while(src[j] != '\0')
{
j++;
}

while(num != 0 || i != 0 )
{
dest[i] = src[i] ;

}

return dest ;
}

int main (void){
	char dest[] = "solo";
	char src[] = "test";
	
	memcpy(dest,src,8);
	printf("%s\n",dest);
	
	return 0 ;
}
