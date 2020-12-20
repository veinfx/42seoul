/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungwpar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 07:00:08 by sungwpar          #+#    #+#             */
/*   Updated: 2020/11/30 21:56:34 by sungwpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;

	while(str[i])
	{
//		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int main()
{
	int i;
	char str[] = "Hel";
	i = ft_strlen(str);
	printf("%d",i);
	ft_strlen(str);
	return 0;
}
