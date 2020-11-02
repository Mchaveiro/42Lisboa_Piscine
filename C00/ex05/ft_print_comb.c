/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tt_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchaveir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 10:20:38 by mchaveir          #+#    #+#             */
/*   Updated: 2020/10/27 15:17:58 by mchaveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_three_num(int i, int j, int k, int l)
{
	if (l)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	ft_putchar(i);
	ft_putchar(j);
	ft_putchar(k);
}

void	ft_print_comb(void)
{
	int i;
	int j;
	int k;
	int l;

	i = '0';
	j = '1';
	k = '2';
	l = 0;
	while (i < ('7' + 1))
	{
		while (j < ('8' + 1))
		{
			while (k < ('9' + 1))
			{
				ft_three_num(i, j, k, l);
				l = 1;
				k++;
			}
			k = ++j + 1;
		}
		j = ++i;
	}
}
