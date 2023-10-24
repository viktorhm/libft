/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 14:59:38 by vharatyk          #+#    #+#             */
/*   Updated: 2023/10/24 08:44:21 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"
#include<stdio.h>
char *ft_substr(char const *s, unsigned int start, size_t len)
{
	
	size_t	zub;
	size_t	size;
	char	*src;

	if (!s)
		return (NULL);
	if ((unsigned int)ft_strlen(s) < start)
		return (ft_strdup(""));
	size = ft_strlen(s + start);
	if (size < len)
		len = size;
	if (!(src = (char *)malloc((len + 1) * sizeof(char))))
		return (NULL);
	zub = 0;
	while (zub < len)
	{
		src[zub] = s[start + zub];
		zub++;
	}
	src[zub] = '\0';
	return (src);

}

/*
int main(int argc, char const *argv[])
{
	char test[] ="#####-----#####";
	char *result[5];
	result = ft_substr(test , 5 , 5);
	printf("%s",result[i]);
	return 0;
}*/