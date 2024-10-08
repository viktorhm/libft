/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 12:41:29 by vharatyk          #+#    #+#             */
/*   Updated: 2023/10/19 14:26:52 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalnum(int character)
	{
	if ((character >= 'A' && character <= 'Z' )
		|| (character >= 'a' && character <= 'z' )
		|| (character >= '0' && character <= '9' ))
		return (1);
	else
		return (0);
}
/*
#include<stdio.h>
#include <ctype.h>
int main (void){
printf("%i   ",ft_isalnum('\n'));
printf("%i",isalnum('\n'));
return 0 ; }*/
