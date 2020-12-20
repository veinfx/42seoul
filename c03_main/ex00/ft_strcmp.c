/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungwpar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 21:18:19 by sungwpar          #+#    #+#             */
/*   Updated: 2020/12/02 22:14:40 by sungwpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while ( s1[i] != '\0' || s2[i] != '\0' ) //한쪽 문자열이 끝날때까지 비교 수행
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
		// 어느 한쪽 문자열이 끝났고 i -1 까지 모두 같은상태
		if ( s1[i] == s2[i]) // s1[i] == s2[i] == '\0' 이면  0 리턴
			return 0;
		else if ( s1[i] != '\0') // s1에 글자 남아있으면 1리턴
			return 1;
		else    					//s2에 글자 남아있으면 -1
			return -1;
}

int main()
{
	char s1[] = "aab";
	char s2[] = "aab";

	printf("strcmp : %d\n", ft_strcmp(s1,s2));
	
	//printf("strncmp : %d\n", ft_strncmp(s1,s2));

	return 0;
}
