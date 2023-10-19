/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:39:58 by vharatyk          #+#    #+#             */
/*   Updated: 2023/10/19 14:28:41 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str )
{
	int	result;
	int	i;
	int	value_oper;

	value_oper = 0;
	result = 0 ;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-' && value_oper == 0)
			value_oper = -1;
		if (str[i] == '+' && value_oper == 0)
			value_oper = 1;
		else
			return (0);
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result * value_oper);
}
/*
#include <stdlib.h> 
#include <stdio.h>
int main (void){

printf("%d  ",atoi(" \n -+10"));
printf("%d",ft_atoi(" \t -+10"));
//printf("%d",ft_atoi("-10"));
return 0 ; 
}*/
