/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dihussai <dihussai@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 18:49:34 by dihussai          #+#    #+#             */
/*   Updated: 2024/07/03 19:17:21 by dihussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int main()
{
	char desti[30] = "Hello";
	char sou[] = " World";
	printf("avant assemblage des 2 str:\nDEST: %s\nSRC: %s\n", desti, sou);
	ft_strcat(desti, sou);
	printf("après assemblage des 2 str: %s\n", desti);
	return(0);
}*/
