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
void  ft_bzero(void *str, size_t count)
	{
	unsigned char	*string;

	string = str;
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
char str[]= "testwqedqdded";
bzero(str,13);
printf("%s",str);
char str_1[] ="testwedqwedq";
ft_bzero(str_1,3);
printf("%s",str);
}
