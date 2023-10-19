/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 08:38:51 by vharatyk          #+#    #+#             */
/*   Updated: 2023/10/19 14:28:16 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_tolower(int chara)
{
	if (chara >= 'A' && chara <= 'Z')
		chara = chara + 32;
	return (chara);
}
/*
#include<stdio.h>
#include <ctype.h>
int main (void)
{
printf("%i",tolower(90));
printf("%i",ft_tolower(90));
}*/
