/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 17:22:51 by vharatyk          #+#    #+#             */
/*   Updated: 2023/10/26 17:26:51 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
if(!lst || !f)
		return ;
	while (lst)
	{
		
		f(lst->content);
		lst = (*lst).next;
	}
}