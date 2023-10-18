/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 18:13:46 by vharatyk          #+#    #+#             */
/*   Updated: 2023/10/16 18:14:13 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<string.h>

/*
** DESCRIPTION : La fonction memmove() copie n octets depuis la zone mémoire
** src vers la zone mémoire dest. Les deux zones peuvent se chevaucher :
** la copie se passe comme si les octets de src étaient d'abord copiés dans
** une zone temporaire qui ne chevauche ni src ni dest, et les octets sont
** ensuite copiés de la zone temporaire vers dest.
**
** VALEUR RENVOYEE : La fonction memmove() renvoie un pointeur sur dest.
*/
void * ft_memmove ( void * dst, const void * src, size_t  len )
	{
	char		*d;
	const char	*s;
	size_t		i;

	d = (char *)dst;
	s = (const char *)src;
	i = -1;
	if (d < s)
	{
		while (++i < len)
			d[i] = s[i];
	}
	else
	{
		while (len-- > 0)
			d[len] = s[len];
	}
	return (dst);
}
/*
int main (void){
	char dest[]  = "aaaaaaa";
	char dest1[] = "aaaaaaa";
	char src[] = "test";

	
	memmove(dest,src,6);
	printf("%s\n",dest);

	ft_memmove(dest1 , src , 6);
	printf("%s",dest1);
	
	return 0 ;
}
*/