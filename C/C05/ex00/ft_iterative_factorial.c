/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 14:45:13 by descamil          #+#    #+#             */
/*   Updated: 2023/06/21 12:07:17 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		i = i * nb;
		nb--;
	}	
	return (i);
}
/*
int main(int argc, char **agrv)
{
	ft_iterative_factorial(argc[1]);
	return (0);
}
*/
