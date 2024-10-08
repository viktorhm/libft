/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:24:17 by vharatyk          #+#    #+#             */
/*   Updated: 2023/10/19 14:27:43 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stddef.h>

void	*ft_memset(void *str, int value, size_t count)
	{
	unsigned char	*string;

	string = str;
	while (count)
	{
		*string = (unsigned char)value;
		string++;
		count--;
	}
	return (str);
}
/*
#include<stdio.h>
#include <string.h>
int main (void)
{
char str[]= "test";
char str1[] = "test";
memset(str ,'-',2);
puts(str);
ft_memset(str1,'-',2);
puts(str1);
return 0 ; 
}*/
