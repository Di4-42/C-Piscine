/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dihussai <dihussai@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 13:38:32 by dihussai          #+#    #+#             */
/*   Updated: 2024/07/03 13:50:40 by dihussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > '9' || str[i] < '0')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int main()
{
	char str1[23] = "92918301";
	char str2[] = "0x0009292049";
	printf("renvoie %d\n", ft_str_is_numeric(str1));
	printf("renvoie %d\n", ft_str_is_numeric(str2));
	return(0);
}*/
