/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 09:10:05 by vharatyk          #+#    #+#             */
/*   Updated: 2023/10/22 14:53:04 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *pointer1, const void *pointer2, size_t size )
	{
	const unsigned char	*p1;
	const unsigned char	*p2;

	p1 = (unsigned char *)pointer1;
	p2 = (unsigned char *)pointer2;
	while (size != 0)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		p1++;
		p2++;
		size--;
	}
	return (0);
}
/*
int main(void){

	int array1 [] = {60, 85, 20, 63};
	int array2 [] = {54, 85, 20, 63};
	size_t size = sizeof( int ) * 5;

	printf("%d  ",memcmp(array1,array2,size));      
	printf("%d",ft_memcmp(array1,array2,size));
	    
    return 0;
}*/
