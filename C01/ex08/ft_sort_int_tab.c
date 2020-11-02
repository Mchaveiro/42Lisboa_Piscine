/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchaveir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 16:53:31 by mchaveir          #+#    #+#             */
/*   Updated: 2020/10/29 17:15:25 by mchaveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int x;
	int y;

	x = 0;
	while (x < size)
	{
		y = x;
		while (y < size)
		{
			if (tab[x] >= tab[y])
				ft_swap(&tab[x], &tab[y]);
			++y;
		}
		++x;
	}
}
