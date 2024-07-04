/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dihussai <dihussai@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 16:08:36 by dihussai          #+#    #+#             */
/*   Updated: 2024/07/03 18:44:08 by dihussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n -1)
	{
		i++;
	}
	return ((char unsigned)s1[i] - (char unsigned)s2[i]);
}
/*
#include <stdio.h>
int main()
{
	char si[] = "COUSOUS";
	char sj[] = "COUCOUS";
	int nb = 7;
	ft_strncmp(si, sj, nb);
	printf("chaine comparé a n nombre: %d\n", ft_strncmp(si, sj, nb));
	return(0);
}*/
