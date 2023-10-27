/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:17:45 by vharatyk          #+#    #+#             */
/*   Updated: 2023/10/26 12:49:12 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list		*new ;

	new = malloc (sizeof(t_list));
	if (new != 0)
	{
		(*new).content = content;
		(*new).next = NULL;
	}
	return (new);
}
