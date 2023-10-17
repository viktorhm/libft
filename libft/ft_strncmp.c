/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:39:26 by vharatyk          #+#    #+#             */
/*   Updated: 2023/10/17 14:39:30 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>


int	ft_strncmp(char *s1, char *s2, size_t n)
	{
	int i = 0;

	while(s1[i] !='\0' && s2[i] != '\0' && n > i)
		{
		if(s1[i] != s2[i])
	 		return (s1[i] - s2[i]);
	 	i++;
		}
	if (i != n)
			return (s1[i] - s2[i]);
	return 0;
	}

#include<stdio.h>
int main(void)
{
	printf("%d  ",strncmp("test","test",4));
	
	printf("%d",ft_strncmp("test","test",4));
	return 0;
}
