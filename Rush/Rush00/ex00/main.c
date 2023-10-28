/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmateo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 15:53:50 by anmateo-          #+#    #+#             */
/*   Updated: 2023/06/07 17:01:40 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);

int	string_to_int(char *str)
{
	int	result;
	int	i;
	int	digit;

	result = 0;
	i = 0;
	if (str[0] == '-')
	{
		return (0);
	}
	while (str[i] != '\0')
	{
		digit = str[i] - '0';
		if (digit >= 0 && digit <= 9)
		{
			result = result * 10 + digit;
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (result);
}

int	main(int n, char *args[])
{
	if (n > 2)
	{
		rush(string_to_int(args[1]), string_to_int(args[2]));
	}
	else
	{
		rush(5, 3);
		rush(5, 1);
		rush(1, 1);
		rush(1, 5);
		rush(4, 4);
	}
	return (0);
}
