/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 08:57:51 by vharatyk          #+#    #+#             */
/*   Updated: 2023/10/17 08:58:05 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *string, int searchedChar)
	{
	char	*str;

	str = (char *)string;
	while (*str != searchedChar)
	{
		if (*str == '\0')
		{
			return (NULL);
		}
		str++;
	}
	return (str);
}
/*
#include<stdio.h>
#include<string.h>
int main (void)
{
printf("%s",strchr("je fais un lontmps . test",'.'));
printf("%s",ft_strchr("je fais un lontmps . test",'.'));
}*/
