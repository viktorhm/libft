/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:06:17 by vharatyk          #+#    #+#             */
/*   Updated: 2023/10/26 16:48:53 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	if(!lst)
		return(NULL);
	while (lst)
	{
		if(!lst->next)
			return(lst);
		lst = (*lst).next;
	}

	return (lst);
}
