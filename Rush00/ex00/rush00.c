/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besteves <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 10:03:00 by besteves          #+#    #+#             */
/*   Updated: 2020/10/25 17:14:59 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a);

void	rush(int x, int y)
{
	int	al;
	int	lg;

	al = 0;
	while (al < y)
	{
		lg = 0;
		while (lg < x)
		{
			if ((al == 0 || al == y - 1) && (lg == 0 || lg == x - 1))
				ft_putchar('o');
			else	if ((al == 0 || al == y - 1) && (lg > 0 || lg < x - 1))
				ft_putchar('-');
			else if ((al > 0 && al < y - 1) && (lg == 0 || lg == x - 1))
				ft_putchar('|');
			else
				ft_putchar(' ');
			lg++;
		}
		write(1, "\n", 1);
		al++;
	}
}
