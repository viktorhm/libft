/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 08:13:54 by vharatyk          #+#    #+#             */
/*   Updated: 2023/10/19 14:16:51 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

size_t	ft_strlcat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;
	
	if(n==0)
		return(0);

	i = 0;
	while (s1[i] != '\0' && i < n)
		i++;
	j = i;
	while (s2[i - j] != '\0' && i < n - 1)
	{
		s1[i] = s2[i - j];
		i++;
	}
	if (j < n)
		s1[i] = '\0';
	return (j + ft_strlen((char*)s2));
}

/*
#include<bsd/string.h>
#include<unistd.h>
#include<stdio.h>
int main (void)
{
char dest [5];
char src [] = "test";

printf("%ld",ft_strlcat(dest , src , 5));
printf("%s",dest );

}*/
