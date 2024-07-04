/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dihussai <dihussai@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 13:55:05 by dihussai          #+#    #+#             */
/*   Updated: 2024/07/03 13:59:22 by dihussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int main(void)
{
	char str1[30] = "porchelli";
	char str2[20] = "1009Pully";
	char str3[10] = "";

	printf("test 1: %d\n", ft_str_is_lowercase(str1));
	printf("test 2: %d\n", ft_str_is_lowercase(str2));
	printf("test 3: %d\n", ft_str_is_lowercase(str3));

	return(0);
}*/
