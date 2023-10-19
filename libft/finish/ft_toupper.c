/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 08:27:41 by vharatyk          #+#    #+#             */
/*   Updated: 2023/10/19 14:28:20 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_toupper(int chara)
	{
	if (chara >= 'a' && chara <= 'z')
		chara = chara - 32 ;
	return (chara);
}
/*
#include<stdio.h>
#include <ctype.h>
int main (void)
{
printf("%i",toupper(107));
printf("%i",ft_toupper(107));
}*/
