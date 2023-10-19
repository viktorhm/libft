/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:01:48 by vharatyk          #+#    #+#             */
/*   Updated: 2023/10/19 14:28:12 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(char const *str, int c)
{
	char const	*aux;

	aux = NULL;
	while (*str)
	{
		if (*str == (char)c)
			aux = str;
		str++;
	}
	return ((char *)aux);
}
/*
#include <string.h>
#include <stdio.h>
int main (void){
printf("%s",strrchr("jans.ter",'.'));
printf("%s",ft_strrchr("jans.ter",'.'));

}*/
