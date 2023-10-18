/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:03:56 by vharatyk          #+#    #+#             */
/*   Updated: 2023/10/18 14:32:20 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <ctype.h>
#include <unistd.h>
#include <stdio.h>

int	ft_isalpha(int character)
	{
	int	i;

	i = 0;
	if ((character < 'A' || character > 'Z' ) && (character < 'a'
			|| character > 'z'))
		return (0);
	else
		return (1);
}
/*
int main (void)
{
printf("%d",isalpha(23));
printf("%d",ft_isalpha(23));

return 0 ;
}*/
