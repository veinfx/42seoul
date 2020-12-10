/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungwpar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 20:06:32 by sungwpar          #+#    #+#             */
/*   Updated: 2020/12/07 18:38:10 by sungwpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int		ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	j = 0;
	k = 0;
	while (dest[i])
		i++;
	while (src[j])
		j++;
	if (size <= 0)
		return (j);
	if (size <= i)
		j = j + size;
	else
		j = j + i;
	while (src[k] && i < size - 1)
		dest[i++] = src[k++];
	dest[i] = '\0';
	return (j);
}
