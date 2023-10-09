/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 14:00:12 by descamil          #+#    #+#             */
/*   Updated: 2023/10/09 18:54:37 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_strlen_mod(const char *s, int i, char c)
{
    int len;
    
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

char  *ft_strlcpy_mod(char *s, char c, int start, int size)
{
    char  *ptr;
    int j;
    
    j = 0;
    ptr = (char *)malloc(size + 1);
    while (s[start] == c && s[start] != '\0')
        start++;
    while (s[start] != '\0' && j < size) 
    {
        ptr[j] = s[start];
        j++;
        start++;
        if (j == size)
            ptr[j] = '\0';
    }
    return (ptr);
}

char    **ft_split(const char *s, char c)
{
    int i;
    int word;
    int a;
    int len_mod;
    char  **arr;
    char  *cpy_mod;

    i = 0;
    a = 0;
    word = 0;
    len_mod = 0;
    while (s[i] != '\0')
    {
        while (s[i] == c)
            i++;
        if (s[i] != c)
            word++;
        while (s[i] != c && s[i] != '\0')
            i++;
    }
    i = 0;
    arr = (char **)malloc((word + 1) * sizeof(char **));
    if (arr == NULL)
        return(NULL);
    while (a < word)
    {
        len_mod = ft_strlen_mod(s, i, c);
        arr[a] = (char *)malloc(len_mod + 1);
        i = len_mod;
        cpy_mod = ft_strlcpy_mod((char *)s, c, i, len_mod);
        arr[a] = cpy_mod;
        a++;
        if (a == word)
        {    
            arr[a] = NULL;
            return (arr);
        }
    }
    return (arr);
}

int main()
{
    char s[] = "    as  l";
    char c = ' ';
    ft_split(s, c);
    return 0;
}
