/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 16:23:26 by tosilva           #+#    #+#             */
/*   Updated: 2020/10/25 19:08:46 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	al;
	int lg;

	al = 0;
	while (al < y)
	{
		lg = 0;
		while (lg < x)
		{
			if (lg == 0 && (al == 0 || al == (y - 1)))
				ft_putchar('A');
			else if (lg == (x - 1) && (al == 0 || al == (y - 1)))
				ft_putchar('C');
			else if (lg == 0 || lg == (x - 1) || al == 0 || al == (y - 1))
				ft_putchar('B');
			else
				ft_putchar(' ');
			lg++;
		}
		write(1, "\n", 1);
		al++;
	}
}
