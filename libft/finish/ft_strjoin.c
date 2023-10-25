/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 15:49:24 by vharatyk          #+#    #+#             */
/*   Updated: 2023/10/25 17:17:53 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str_finale;
	int		nb;

	nb = ft_strlen(s1) + ft_strlen(s2);
	str_finale = malloc(nb + 1);
	if (!str_finale)
		return (NULL);
	ft_bzero(str_finale, nb + 1);
	ft_strlcat(str_finale, s1, nb + 1);
	ft_strlcat(str_finale, s2, nb + 1);
	return (str_finale);
}
