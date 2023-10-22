/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:02:32 by vharatyk          #+#    #+#             */
/*   Updated: 2023/10/22 14:52:13 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
	{
	char	*str;
	int		s1_len;
	int		i;

	s1_len = 0;
	while (s[s1_len] != '\0')
		s1_len++;
	str = (char *)malloc((sizeof (char) * s1_len + 1));
	if (!(str))
		exit(0);
	i = 0;
	while (i < s1_len)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
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
