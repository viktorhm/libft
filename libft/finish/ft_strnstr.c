/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 08:13:54 by vharatyk          #+#    #+#             */
/*   Updated: 2023/10/19 12:30:12 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!big || !little)
		return (NULL);
	i = 0;
	j = 0;
	if (little[j] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && little[j] != '\0' && i < len)
	{
		j = 0;
		if (big[i] == little[0])
			while (big[i + j] == little[j] && (i + j) < len){
				if (little[j + 1] == '\0')
					return ((char *)big + i);
				j++;
			}
		i++;
	}
	return (NULL);
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
