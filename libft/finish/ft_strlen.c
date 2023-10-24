/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:59:45 by vharatyk          #+#    #+#             */
/*   Updated: 2023/10/24 08:29:21 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
#include<stdio.h>
#include <string.h>
int main(void){
char value[]="teseserwefwefwer545e4rf89e4rfw84erf6w8e4rf6we4rt";
printf("%li ",strlen(value));
printf("%i",ft_strlen(value));
return 0 ;
}*/
