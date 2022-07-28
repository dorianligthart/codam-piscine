/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/25 00:51:45 by dligthar      #+#    #+#                 */
/*   Updated: 2022/07/25 00:52:32 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;
	int	a;

	if (n == 0)
		return (0);
	i = 0;
	while (((s1[i] != '\0') || (s2[i] != '\0')) && i < (n - 1))
	{
		if (s1[i] < s2[i])
		{
			return (s1[i] - s2[i]);
		}
		else if (s1[i] > s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

// int main(void)
// {
// 	char s1[] = "aa";
// 	char s2[] = "a";
// 	int i1 = 0;
// 	printf("%i\n", strncmp(s1, s2, i1));
// 	printf("%i\n", ft_strncmp(s1, s2, i1));
// 	return (0);
// }
