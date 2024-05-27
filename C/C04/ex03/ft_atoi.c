/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 16:03:18 by descamil          #+#    #+#             */
/*   Updated: 2023/06/21 09:46:50 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	m;
	int	number;

	i = 0;
	m = 1;
	number = 0;
	while ((str[i] >= 0 && str[i] <= 32) || (str [i] == 127))
		i++;
	while ((str[i] == '+') || (str[i] == '-'))
	{
		if (str[i] == '-')
			m *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = number * 10 + (str[i] - '0');
		i++;
	}
	return (m * number);
}

int main(int argc, char *argv[])
{
    if (argc > 1)
    {
        int result = ft_atoi(argv[1]);
        printf("%d\n", result);
    }
    else
    {
        printf("No hay valores\n");
    }

    return 0;
}
