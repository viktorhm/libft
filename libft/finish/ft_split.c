/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 12:41:09 by vharatyk          #+#    #+#             */
/*   Updated: 2023/10/24 13:24:22 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>


static int  taille_case(char *s ,int c)
	{

	int i;
	int value;
	value = 0;
	i = 0;
		while(s[i]!='\0')
		{
			if(s[i] == c)
			{
				printf("%c",s[i]);
				i++;
				value++;
			}
		i++;
	}
	return(value+1);
}

static int *nb_chara(char *s  , int c  , int nb_case)
{
	int *tab;
	int value;
	int i ;
	int j ; 

	value = 0 ;
	i = 0 ;
	j = 0 ;
	tab = malloc(nb_case*sizeof(int));
	while(s[i]!='\0')
	{
		if(s[i]!= c)
		{
			i++;
			value++;
		}
		else
			tab[j] = i++; 
	}


}

int main(void)
{
	char *s="test , love , it  , because  , is , help , my<3";
	int i = 0 ;
	int *tab;
	i = taille_case(s ,',');
	tab = nb_chara(s  , ','  , i);
	printf("%d",tab[0]);

}
