/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 19:27:24 by descamil          #+#    #+#             */
/*   Updated: 2023/09/23 16:20:36 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*arr;

	len = 0;
	while (s[len] != '\0')
		len++;
	arr = (char *)malloc(len + 1);
	if (arr == NULL)
		return (NULL);
	len = 0;
	while (s[len] != '\0')
	{
		arr[len] = s[len];
		len++;
	}
	arr[len] = '\0';
	return (arr);
}

/*
int main()
{
	const char *s = "Inicio   \n  df sf \t  sdfe1Fin";
	char *duplicate = ft_strdup(s);
	char *duplicate2 = strdup(s);

	if (s == NULL)
		exit(1);
	printf("Duplicate: %s.\n", duplicate);
	printf("Dplicate2: %s.\n", duplicate2);
	free(duplicate);
	return 0;
}
*/
