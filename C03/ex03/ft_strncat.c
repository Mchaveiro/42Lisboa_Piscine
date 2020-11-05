/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchaveir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 04:36:02 by mchaveir          #+#    #+#             */
/*   Updated: 2020/11/04 17:54:06 by mchaveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int h;

	i = 0;
	h = 0;
	while (dest[i] != '\0')
		i++;
	while (h < nb && src[h] != '\0')
	{
		dest[i] = src[h];
		h++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
