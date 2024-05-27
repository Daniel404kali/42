/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 15:05:12 by descamil          #+#    #+#             */
/*   Updated: 2023/06/17 13:36:58 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return ((char *)str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[j])
		{
			j++;
			if (to_find[j] == '\0')
				return (str + i - j + 1);
		}
		else
		{
			i = i - j;
			j = 0;
		}
		i++;
	}
	return (NULL);
}

int main ()
{
    char    str[] = "Frase de prueba";
    char    to_find[] = "addff";
    printf("%s\n", ft_strstr(str, to_find));
    return (0);
}
