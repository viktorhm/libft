/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:39:58 by vharatyk          #+#    #+#             */
/*   Updated: 2023/10/22 14:32:48 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str )
{
	int	result;
	int	i;
	int	value_oper;

	value_oper = 1;
	result = 0 ;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			value_oper = -1;
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
		return (0);
	while (str[i] >= '0' && str[i] <= '9')
		result = result * 10 + str[i++] - '0';
	return (result * value_oper);
}
/*
#include <stdlib.h> 
#include <stdio.h>
int main (void){

printf("%d  ",atoi(" \n 945"));
printf("%d",ft_atoi(" \t 945"));
//printf("%d",ft_atoi("-10"));
return 0 ; 
}*/
