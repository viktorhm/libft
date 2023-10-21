/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:02:32 by vharatyk          #+#    #+#             */
/*   Updated: 2023/10/19 14:28:30 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
	{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
		i++;
	str = (char *) malloc (i + 1 * (sizeof (*str)));
	if(!str)
		exit(0);
	while (i > j)
	{
		str[j] = s[j];
		j++;
	}
	return (str);
}
/*
#include<string.h>
#include<stdio.h> 
int main(void)
{
char str[]="testwpieufqwpefibqwpefibjqwepfibqwefpiqb";

printf("%s  ",ft_strdup(str));
printf("%s",strdup(str));

}*/
