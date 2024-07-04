/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dihussai <dihussai@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 19:26:12 by dihussai          #+#    #+#             */
/*   Updated: 2024/07/04 13:25:31 by dihussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < nb)
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
	char dest[50] = "Hello comment tu"; // 17
	char src[] = " vas, moi ca va"; // 14, 3
	unsigned int nb = 4;
	printf("avant concatenation:\nDEST:%s\nSRC:%s\n", dest, src);
	ft_strncat(dest, src, nb);
	printf("concatenation des de str avec nb chiffre:\nDEST:%s\n", dest);
	return(0);
}*/
