/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:08:35 by vharatyk          #+#    #+#             */
/*   Updated: 2023/10/18 12:11:38 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"ftlib.h"

void * calloc( size_t elementCount, size_t elementSize )
{
	void value
	value =(void*)molloc(elementCount * elementSize)
	if(!value)
		return(NULL);
	ft_bzero(value , elementCount )
}

