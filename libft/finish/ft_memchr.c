/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 08:17:59 by vharatyk          #+#    #+#             */
/*   Updated: 2023/10/19 14:27:15 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *memoryBlock, int searchedChar, size_t size)
{
	unsigned char	*str;

	str = (unsigned char*) memoryBlock;
	while (size)
	{
		if (*str == (unsigned char)searchedChar)
			return (str);
		str++;
		size--;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

char data[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
const unsigned int size = 10;

// On recherche une valeur inhéxistante :
void * found = memchr( data, 50, size );
printf( "50 is %s\n", ( found != NULL ? "found" : "not found" ) );
if ( found != NULL ) {
printf( "La valeur à la position calculée est %d\n", *((char *) found) );}
// On recherche une valeur existante :
found = ft_memchr( data, 50, size );
printf( "50 is %s\n", ( found != NULL ? "found" : "not found" ) );
if ( found != NULL ) {
printf( "La valeur à la position calculée est %d\n", *((char *) found) );
}

    return EXIT_SUCCESS;
}*/
