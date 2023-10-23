/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 14:59:38 by vharatyk          #+#    #+#             */
/*   Updated: 2023/10/23 14:33:50 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"
#include<stdio.h>
char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*dest;

	i=0;
	j=0;

	dest = (char*)malloc(sizeof(*s)*(len)); 
	if(!dest)
		return(NULL);

	while(s[i])
		{
			if(i>=start && j<len)
				{
				dest[j]=s[i];
				j++;
				}
			i++;
		}
	dest[i] = 0 ;
	return(dest);
}

/*
int main(int argc, char const *argv[])
{
	char test[] ="#####-----#####";
	char *result[5];
	result = ft_substr(test , 5 , 5);
	printf("%s",result[i]);
	return 0;
}*/