/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:53:27 by vharatyk          #+#    #+#             */
/*   Updated: 2023/10/26 17:09:26 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if(!lst || !del)
		return ;
	del(lst->content);
	free(lst);

}