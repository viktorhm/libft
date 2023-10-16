/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 16:19:23 by vharatyk          #+#    #+#             */
/*   Updated: 2023/10/16 17:04:10 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <strings.h>
void ft_bzero(void *str, size_t count)
	{
	unsigned char	*string;

	string = (unsigned char )*str;
	while(count)
		{
		*string = 0;
		string++;
		count--;
	}
	
}
#include<stdio.h>
int main (void)
{
char str[]= "test";
bzero(str,2);
printf("%s",str);
char str_1[] ="test";
ft_bzero(str_1,2);
printf("%s",str);
}
