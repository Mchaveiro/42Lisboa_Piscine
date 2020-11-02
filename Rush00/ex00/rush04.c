/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchaveir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 10:49:47 by mchaveir          #+#    #+#             */
/*   Updated: 2020/10/25 19:21:56 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a);

void	rush(int x, int y)
{
	int al;
	int	lg;

	al = 0;
	while (al < y)
	{
		lg = 0;
		while (lg < x)
		{
			if ((lg == 0 && al == 0)
					|| ((lg == x - 1 && al == y - 1) && (y > 1 && x > 1)))
				ft_putchar('A');
			else if ((lg == x - 1 && al == 0) || (lg == 0 && al == y - 1))
				ft_putchar('C');
			else if (lg > 0 && lg < x - 1 && al != 0 && al != y - 1)
				ft_putchar(' ');
			else
				ft_putchar('B');
			lg++;
		}
		write(1, "\n", 1);
		al++;
	}
}
