/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dihussai <dihussai@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 15:53:06 by dihussai          #+#    #+#             */
/*   Updated: 2024/07/04 12:23:25 by dihussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
int main(void)
{
	char str1[40] = "Cette phrase compte 30 lettres";
	int nb = ft_strlen(str1);
	printf("nbr de caractères dans la chaine: %d\n", nb);
	return(0);
}
*/
