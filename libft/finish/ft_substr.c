/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 14:59:38 by vharatyk          #+#    #+#             */
/*   Updated: 2023/10/22 15:49:05 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"
char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char* dest ;

	dest = malloc(sizeof(*s)*len-start); 
	if(!dest)
		return(NULL);

	while(start != len )
		{
		dest[start]=s[start];
		start++;
		}
	dest[start+1] = '\0';
return(dest);
}

int int main(int argc, char const *argv[])
{
	char test[] ="test";
	return 0;
}