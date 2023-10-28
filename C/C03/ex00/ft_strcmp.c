/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 12:02:53 by descamil          #+#    #+#             */
/*   Updated: 2023/09/15 18:30:37 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 && *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*
int main()
{
	char	s1[] = "Esta es una frase de prueba";
	char	s2[] = "sta es una frase de prueba";
	printf("%d", ft_strcmp(s1, s2));
	return (0);
}
*/
