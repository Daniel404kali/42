/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 14:39:31 by descamil          #+#    #+#             */
/*   Updated: 2023/06/20 14:41:57 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_strlen(char *base)
{
	int	len;

	len = 0;
	while (base[len] != '\0')
		len++;
	return (len);
}

int	ft_double(char *base, int len)
{
	int		i;
	int		n;
	char	b;

	i = 0;
	if (len <= 1)
		return (0);
	while (i < len)
	{
		n = 0;
		b = base[i];
		while (n < len)
		{
			while ((n != i && b == base[n]) || (b == '+')
				|| (b == '-' ) || (b < ' ') || (b > '~'))
				return (0);
			n++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	l_nbr;

	l_nbr = nbr;
	if (l_nbr < 0)
	{
		ft_putchar('-');
		l_nbr = -l_nbr;
	}
	else if (l_nbr == 0)
	{
		ft_putchar(base[0]);
		return ;
	}
	if (ft_double(base, ft_strlen(base)) == 1)
	{
		if (l_nbr >= ft_strlen(base))
			ft_putnbr_base(l_nbr / ft_strlen(base), base);
		ft_putchar(base[l_nbr % ft_strlen(base)]);
	}
}
/*
int main()
{
	int	nbr = -12;
	char	hex[] = "0123456789abcdef";
	char	bi[] = "01";
	ft_putnbr_base(nbr, hex);
	ft_putchar('\n');
	ft_putnbr_base(nbr, bi);
	ft_putchar('\n');
	return 0;
}
*/
