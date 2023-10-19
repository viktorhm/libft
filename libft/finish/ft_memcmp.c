/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 09:10:05 by vharatyk          #+#    #+#             */
/*   Updated: 2023/10/19 14:27:30 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *pointer1, const void *pointer2, size_t size )
	{
	const unsigned char	*p1;
	const unsigned char	*p2;
	size_t				i;

	p1 = pointer1;
	p2 = pointer2;
	while (size > i)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
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
