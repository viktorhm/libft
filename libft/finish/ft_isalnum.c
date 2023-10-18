/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 12:41:29 by vharatyk          #+#    #+#             */
/*   Updated: 2023/10/16 12:52:31 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <ctype.h>

int	ft_isalnum(int character)
	{
	if ((character > 'A' && character < 'Z' )
		|| (character > 'a' && character < 'z' )
		|| (character > '0' || character < '9' ))
		return (1);
	else
		return (0);
}
/*
int main (void){
printf("%i",ft_isalnum(48));
printf("%i",isalnum(48));
return 0 ; 

}*/
