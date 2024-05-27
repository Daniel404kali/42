/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 09:36:30 by descamil          #+#    #+#             */
/*   Updated: 2023/06/17 11:08:02 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcapitalize(char *str)
{
	int		i;
	int		next;
	char	c;

	i = 0;
	next = 1;
	while (str[i] != '\0')
	{
		c = str[i];
		if (next == 1 && c >= 'a' && c <= 'z')
			str[i] -= 32;
		else if (next == 0 && c >= 'A' && c <= 'Z')
			str[i] += 32;
		if ((c < '0') || (c > '9' && c < 'A'))
			next = 1;
		else if ((c > 'Z' && c < 'a') || (c > 'z'))
			next = 1;
		else
			next = 0;
		i++;
	}
	return (str);
}
/*
int	main()
{
	char str[] = "Esta ES una FRASe PaRA pRUEBAS";
	ft_strcapitalize(str);
	printf("%s\n", str);
	return (0);
}
*/
