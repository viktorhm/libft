/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:13:06 by vharatyk          #+#    #+#             */
/*   Updated: 2023/10/19 14:27:11 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isprint(int character)
	{
	if (character < ' ' || character > '~')
		return (0);
	else
		return (1);
}
/*
int main (void)
{
printf("%i  ",ft_isprint(130));
printf("%i",isprint(130));
}*/
