/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 10:33:29 by vharatyk          #+#    #+#             */
/*   Updated: 2023/10/18 10:47:22 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



int ft_atoi( const char * str )
{
	int result;
	int i;
	int value_oper;
	
	value_oper =0;
	result = 0 ;
	

	while(str[i]==' ' || str[i]=='\n' || 
	str[i]=='\t' || str[i] == '\v' || str[i] =='\f' || str[i] == '\r' )
	{
		i++;

	}
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			value_oper++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		valeur = valeur * 10 + str[i] - '0';
		i++;
	}



	if()
		return(-result);
	else
		return(result);
}


#include <stdlib.h> 
#include <stdio.h>
int main (void){

printf("%d",atoi("  -10"));
//printf("%d",ft_atoi("-10"));
return 0 ; 
}
