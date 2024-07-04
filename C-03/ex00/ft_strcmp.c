/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dihussai <dihussai@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 15:51:21 by dihussai          #+#    #+#             */
/*   Updated: 2024/07/03 16:06:29 by dihussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
int main()
{
	char stx[20] = "cacay"; // y = 121
	char sty[20] = "cacaq"; // q = 113, 121 - 113 = devrait renvoyer 8
	ft_strcmp(stx, sty);
	printf("resultat des deux chaine compare: %d\n", ft_strcmp(stx, sty));
	return(0);
}*/
