/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 12:41:09 by vharatyk          #+#    #+#             */
/*   Updated: 2023/10/24 18:04:45 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"




static int nb_mots(char *s , char c) 
	{
	int i = 0;
	int nb_mots =0;
	while(s[i]!='\0')
	{
		if(s[i]==c)
			nb_mots ++;

	}
	return(nb_mots+1);
	}

static *char Created_word(int start , int end ,char *s , char c )
	{
	int cont = 0 ;
	char word

	word = malloc((end - start(+1)) *sizeof(char) )
		while(start < finish)
			word[i++]=str[start++]
		word[i] = '\0'
		return word

	}

char	**ft_split(char const *s, char c)
{
int i = 0;
while(i < strlen(s))
{
	if(s[i] != c && index < 0)
		index = i
	


}

}