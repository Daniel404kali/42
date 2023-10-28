/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 12:13:19 by descamil          #+#    #+#             */
/*   Updated: 2023/06/21 14:25:36 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	else
		i = nb * ft_recursive_factorial(nb - 1);
	return (i);
}
/*
int main()
{
    int nb;

    nb = 3628800;
    int result = ft_recursive_factorial(nb);
    printf("%d\n", result);
    return 0;
}
*/
