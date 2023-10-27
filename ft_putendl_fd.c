/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 04:22:08 by vharatyk          #+#    #+#             */
/*   Updated: 2023/10/25 17:02:05 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	i = ft_strlen(s);
	while (i != j)
	{
		write(fd, &s[j], 1);
		j++;
	}
	write(fd, "\n", 1);
}
