/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchaveir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 05:23:57 by mchaveir          #+#    #+#             */
/*   Updated: 2020/11/04 05:30:23 by mchaveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int n;

	n = 0;
	while (*dest && n < size)
	{
		n++;
		dest++;
	}
	while (*src && n + 1 < size)
	{
		*dest = *src;
		dest++;
		src++;
		n++;
	}
	if (n < size)
		*dest = 0;
	while (*src)
	{
		n++;
		src++;
	}
	return (n);
}
