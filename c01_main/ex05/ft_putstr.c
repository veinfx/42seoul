/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungwpar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 06:51:02 by sungwpar          #+#    #+#             */
/*   Updated: 2020/11/30 18:26:17 by sungwpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putstr(char *str)
{
	int i;
	
	i = 0;

	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}
int main()
{
	 char str[] = "Hello 42 Seoul";
	 ft_putstr(str);
	 return 0;
}


