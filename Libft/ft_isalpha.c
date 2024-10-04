/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diahussa <diahussa@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 13:23:27 by diahussa          #+#    #+#             */
/*   Updated: 2024/10/02 19:11:59 by diahussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalpha(char c)
{
	while ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z' ))
		return (1);
	return (0);
}
/*
int main(void)
{
	int i = 'a';
	printf("%d\n", ft_isalpha(i));
	return(0);
}*/
