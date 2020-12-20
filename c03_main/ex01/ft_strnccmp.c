/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnccmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungwpar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 22:15:23 by sungwpar          #+#    #+#             */
/*   Updated: 2020/12/02 22:24:56 by sungwpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
				//한쪽 문자열이 끝날때까지 또는 n 보다 작을때  비교
	{
		if (s1[i] == s2[i]) // 문자 같으면 계속 비교
		{
			i++;
			continue;
		}
		else if ( s1[i] > s2[i]) // 앞의 문자가 더 크면 1 리턴
			return 1;
		else if ( s1[i] < s2[i]) // 뒤의 문자가 더 크면  -1
			return -1;
		i++;
	}
		// 어느 한쪽 문자열이 끝나거나 n갯수만큼 비교 한 후
		if ( n == i ) // i == n 이면 찾는 갯수 안의 문자는 모두 같음 , 0 리턴
			return 0;
		else if ( s1[i] != '\0' && s2[i] != '0') // 문자열 끝났으면, 0 리턴
			return 1;
		else if ( s1[i] > s2[i]) // 둘 중 하나라도 문자열 남아 있으면 비
			return 1;
		else    					
			return -1;
}

int main()
{
	char s1[] = "aaa";
	char s2[] = "aab";

	//printf("strcmp : %d\n", ft_strcmp(s1,s2));

	printf("strncmp : %d\n", ft_strncmp(s1, s2, 2));

	return 0;
}
