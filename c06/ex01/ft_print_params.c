/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungwpar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 15:29:12 by sungwpar          #+#    #+#             */
/*   Updated: 2020/12/09 15:57:01 by sungwpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int			main(int argc, char *argv[])
{
	int		k;

	k = 1;
	while (k < argc)
	{
		ft_putstr(argv[k]);
		ft_putstr("\n");
		k++;
	}
	return (0);
}
