/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 12:55:42 by vharatyk          #+#    #+#             */
/*   Updated: 2023/10/18 14:32:16 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int charactere)
	{
	if (charactere >= 0 || charactere <= 127)
		return (1);
	else
		return (0);
}

/*
#include<stdio.h>
int main(void)
{
printf("%d",ft_isascii(45));
return 0 ;
}*/
