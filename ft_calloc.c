/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 17:08:42 by vharatyk          #+#    #+#             */
/*   Updated: 2023/10/22 14:17:18 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t elementCount, size_t elementSize)
{
	void	*value;

	value = (void *)malloc(elementCount * elementSize);
	if (!value)
		exit(0);
	ft_bzero (value, elementSize * elementCount);
	return (value);
}
