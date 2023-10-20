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
	size_t				i;
	unsigned char		*ptr;
	const unsigned char	*ptr2;

	ptr = (unsigned char*)dst;
	ptr2 = (unsigned char*)src;
	i = 0;
	if (!ptr && !ptr2)
		return (NULL);
	if (ptr2 < ptr)
		while (++i <= len)
			ptr[len - i] = ptr2[len - i];
	else
		while (len-- > 0)
			*(ptr++) = *(ptr2++);
	return (dst);
}
/*
#include<stdio.h>

int main (void){
	char dest[]  = "aaaa";
	char dest1[] = "aaaa";
	char src[] = "test";

	
	memmove(dest,src,2);
	printf("%s\n",dest);

	ft_memmove(dest1 , src ,2);
	printf("%s",dest1);
	
	return 0 ;
}*/
