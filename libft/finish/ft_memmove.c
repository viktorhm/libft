/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 18:13:46 by vharatyk          #+#    #+#             */
/*   Updated: 2023/10/19 14:27:35 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;
	size_t		i;

	d = (char *)dst;
	s = (const char *)src;
	i = 0;
	if (d > s)
	{
		while (len-- > 0)
			d[len] = s[len];
	}
	else
	{
		while (i < len)
		{
			d[i] = s[i];
			i++ ;
		}
		return (dst);
	}
	return (NULL);
}
/*
int main (void){
	char dest[]  = "aaaa";
	char dest1[] = "aaaa";
	char src[] = "test";

	
	memmove(dest,src,4);
	printf("%s\n",dest);

	ft_memmove(dest1 , src ,4);
	printf("%s",dest1);
	
	return 0 ;
}*/
