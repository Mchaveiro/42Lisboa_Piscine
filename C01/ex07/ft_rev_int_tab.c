/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchaveir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 15:06:54 by mchaveir          #+#    #+#             */
/*   Updated: 2020/10/29 15:26:12 by mchaveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int aux;
	int count;

	count = 0;
	while (count < size / 2)
	{
		aux = tab[count];
		tab[count] = tab[(size - 1) - count];
		tab[(size - 1) - count] = aux;
		count++;
	}
}
