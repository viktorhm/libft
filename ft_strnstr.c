/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 08:13:54 by vharatyk          #+#    #+#             */
/*   Updated: 2023/10/22 14:52:48 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	c;
	size_t	n_len;
	char	*bigou;

	i = 0;
	bigou = (char *)big;
	n_len = ft_strlen((char *)little);
	if (n_len == 0 || big == little)
		return (bigou);
	while (bigou[i] != '\0' && i < len)
	{
		c = 0;
		while (bigou[i + c] != '\0' && little[c] != '\0'
			&& bigou[i + c] == little[c] && i + c < len)
			c++;
		if (c == n_len)
			return (bigou + i);
		i++;
	}
	return (0);
}

/*
int main (void)
{
char l[]="testedwrefwer";
char b[]="testedwrefwergw";
printf("%s ",strnstr(b, l, 4));
printf("%s",ft_strnstr(b ,l , 4));

return 0 ; 
}*/
