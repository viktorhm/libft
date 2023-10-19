/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 10:09:50 by vharatyk          #+#    #+#             */
/*   Updated: 2023/10/19 11:08:54 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

void ft_strlcpy(char *dst, const char *src, size_t size);
{
const char *sr;
char *ds;
size_t i ;

sr* = *src;
ds* = *dst;
i=0;

while(size < i)
{
ds[i]=sr[i]
i++;
}
}


#include <string.h>
#include<stdio.h>
int main(void){
char dest[5];
char src[5]="test";
printf("%d",strlcpy(dest , src , 5));

}

