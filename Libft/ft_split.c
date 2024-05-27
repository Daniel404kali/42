/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 14:00:12 by descamil          #+#    #+#             */
/*   Updated: 2023/10/10 17:54:06 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strlen_mod(const char *s, int i, char c)
{
	int	len;

	len = 0;
	while (s[i] == c && s[i] != '\0')
		i++;
	while (s[i] != '\0' && s[i] != c)
	{
		len++;
		i++;
	}
	return (len);
}

char	*ft_strlcpy_mod(char *s, char c, int *new_start, int size)
{
	char	*ptr;
	int		j;
	int		start;

	j = 0;
	start = *new_start;
	ptr = (char *)malloc(size + 1);
	if (ptr == NULL)
		return (NULL);
	while (s[start] == c && s[start] != '\0')
		start++;
	while (s[start] != '\0' && j < size)
		ptr[j++] = s[start++];
	ptr[j] = '\0';
	*new_start = start;
	return (ptr);
}

void	*free_memory(int a, char **arr)
{
	int	f;

	f = 0;
	while (f < a)
	{
		free(arr[f]);
		f++;
	}
	free(arr);
	return (NULL);
}

int	ft_words(const char *s, char c)
{
	int	word;
	int	i;

	word = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i] != '\0')
			word++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (word);
}

char	**ft_split(const char *s, char c)
{
	int		i;
	int		a;
	int		len_mod;
	char	**arr;
	char	*cpy_mod;

	i = 0;
	a = 0;
	len_mod = 0;
	arr = (char **)malloc((ft_words(s, c) + 1) * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	while (a < ft_words(s, c))
	{
		len_mod = ft_strlen_mod(s, i, c);
		cpy_mod = ft_strlcpy_mod((char *)s, c, &i, len_mod);
		if (cpy_mod == NULL)
			return (free_memory(a, arr));
		arr[a] = cpy_mod;
		a++;
	}
	arr[a] = NULL;
	return (arr);
}

void ft_leaks()
{
	system("leaks -q test");
}

int main()
{
	char **prueba;
	atexit(ft_leaks);
    char s[] = "as  l";
    char c = ' ';
    prueba = ft_split(s, c);

	free(prueba[0]);
	free(prueba[1]);
	free(prueba);

    return 0;
}

