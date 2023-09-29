/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:34:35 by descamil          #+#    #+#             */
/*   Updated: 2023/09/25 18:37:31 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*final;
	char	*str;

	i = 0;
	j = -1;
	str = (char *) s;
	while (s[i] != '\0')
		i++;
	if ((s == NULL) || (start < 0) || (len <= 0) || (start >= i)
		|| (len >= i) || (i == 127))
		return (NULL);
	if (start + len >= i)
		len = i - start;
	final = (char *)malloc(len + 1);
	if (final == NULL)
		return (NULL);
	while (++j < len)
		final[j] = str[j + start];
	final[j] = '\0';
	return (final);
}

/*
int	main()
{
	char const		*s = "La frase";
	unsigned int	start = 7;
	size_t			len = 3;
	char			*final = ft_substr(s, start, len);
	
	if (final != NULL)
	{
		printf("Subcadena: %s\n", final);
		free(final);
	}
	else 
		printf("Error. \n");
	return (0);
}
*/
