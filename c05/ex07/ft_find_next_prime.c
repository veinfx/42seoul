/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungwpar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 12:54:39 by sungwpar          #+#    #+#             */
/*   Updated: 2020/12/09 13:02:40 by sungwpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	long long i;

	if (nb <= 1)
	{
		return (0);
	}
	i = 2;
	while (i * i <= nb)
	{
		if ((nb % i) == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	while (!(ft_is_prime(nb)))
	{
		nb++;
		ft_is_prime(nb);
	}
	return (nb);
}
