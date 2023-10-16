/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:15:36 by vharatyk          #+#    #+#             */
/*   Updated: 2023/10/16 11:25:13 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <ctype.h>
#include <stdio.h>

int	ft_isdigit(int nb)
	{
	if (nb >= '0' && nb <= '9')
		return (1);
	else
		return (0);
}


int main (void)
{
printf("%i  ",isdigit(84));
printf("%i",ft_isdigit(84));

}
