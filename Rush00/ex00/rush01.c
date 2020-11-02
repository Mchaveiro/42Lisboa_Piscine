/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besteves <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 18:56:35 by besteves          #+#    #+#             */
/*   Updated: 2020/10/25 19:21:25 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a);

void	rush(int x, int y)
{
	int al;
	int lg;

	al = 0;
	while (al < y)
	{
		lg = 0;
		while (lg < x)
		{
			if ((al == 0 && lg == 0)
					|| ((al == y - 1 && lg == x - 1) && ((y > 1) && (x > 1))))
				ft_putchar('/');
			else if ((al == 0 && lg == x - 1) || (al == y - 1 && lg == 0))
				ft_putchar('\\');
			else if (lg == 0 || lg == (x - 1) || al == 0 || al == (y - 1))
				ft_putchar('*');
			else
				ft_putchar(' ');
			lg++;
		}
		write(1, "\n", 1);
		al++;
	}
}
