/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 19:02:17 by vharatyk          #+#    #+#             */
/*   Updated: 2023/10/25 04:09:03 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	 unsigned int  i ;
	 i = 0;

	 if(!s || !f)
	 	return ;

	while(s[i])
	{
		f(i , &s[i]); // S+1
		i++;
	}


}