/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/21 16:41:32 by dligthar      #+#    #+#                 */
/*   Updated: 2022/07/25 00:40:14 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	a;

	i = 0;
	while ((s1[i] != '\0') || (s2[i] != '\0'))
	{
		if (s1[i] < s2[i])
		{
			return(s1[i] - s2[i]);
		}
		else if (s1[i] > s2[i])
		{
			return(s1[i] - s2[i]);
		}
		i++;
	}
	return(s1[i] - s2[i]);
}

int main()
{
	char a[] = "aaaa";
	char b[] = "aaaa";

	printf("%i\n", ft_strcmp( a, b));
	printf("%i\n", strcmp( a, b));
	return 0;
}
