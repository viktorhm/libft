/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 16:19:23 by vharatyk          #+#    #+#             */
/*   Updated: 2023/10/19 14:26:48 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *str, size_t count)
{
	char	*string;

	string = str;
	while (count)
	{
		*string = 0;
		string++;
		count--;
	}
}
/*
#include <strings.h>
#include<stdio.h>
#include<unistd.h>
int main (void)
{
int i = 0;
char str[]= "testwqedqdded";
bzero(str,3);
while(i != 10)
{
write(1,&str[i],1);
i++;
}
printf("\n");
i=0 ;
char str_1[] ="testwqedqdded";
ft_bzero(str_1,3);
while(i != 10)
{
write(1,&str_1[i],1);
i++;
}
return 0 ; 
}*/
