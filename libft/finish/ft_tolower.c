/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 08:38:51 by vharatyk          #+#    #+#             */
/*   Updated: 2023/10/17 08:54:25 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
