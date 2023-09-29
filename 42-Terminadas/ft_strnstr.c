/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 17:01:54 by descamil          #+#    #+#             */
/*   Updated: 2023/09/29 18:57:52 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;
	
	i = 0;
	j = 0;
	if ((s1 == NULL && s2 == NULL) || (s2 == NULL))
		return ((char *)s1);
	while (i < len && s1[i] != '\0')
	{
		while (s1[i] == s2[j] && i < len)
		{
			j++;
			i++;
			if (i > len)
				return (0);
			if (s2[j + 1] == '\0')
				return ((char *)(&s1[i - len_s2] + 1));
		}
		i++;
		j = 0;
	}
	return (0);
}

/*
int main()
{
	const char *s1 = "Esta es la frase";
	const char *s2 = "ta e";
	size_t len = 5;
	char *result = ft_strnstr(s1, s2, len);
	
	if (result != NULL)
		printf ("'%s' encontrado en '%s' en la posicion %ld.\n", s2, s1, result - s1);
	else
		printf ("'%s' no se encontro en '%s'.\n", s2, s1);

	char *result2 = strnstr(s1, s2, len);

	if (result2 != NULL)
		printf ("'%s' encontrado en '%s' en la posicion %ld.\n", s2, s1, result - s1);
	else
		printf ("'%s' no se encontro en '%s'.\n", s2, s1);
	return (0);
}
*/
