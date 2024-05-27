/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:55:13 by descamil          #+#    #+#             */
/*   Updated: 2023/09/29 18:19:49 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*s1;
	unsigned char		caracter;

	i = 0;
	s1 = (const unsigned char *)s;
	caracter = (unsigned char)c;
	while (i < n)
	{
		if (s1[i] == caracter)
			return ((void *)s1 + i);
		i++;
	}
	return (NULL);
}

/*
int main()
{
	const char s[] = "La frase";
	int c = 'w';
	size_t n = 4;
	const char *mem = memchr(s, c, n);
	if (mem == NULL)
	{
		printf("La %c no está.\n", (char)c);
		return (0);
	}
	else
	{
		printf("La %c está en el puntero %p.\n", (char)c, mem);
		return (1);
	}
}
*/
