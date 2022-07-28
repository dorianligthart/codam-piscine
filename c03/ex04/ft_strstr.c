/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/26 15:30:04 by dligthar      #+#    #+#                 */
/*   Updated: 2022/07/28 23:27:07 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[j] != '\0')
	{
		while ((to_find[i] == str[j]) && to_find[i] != '\0')
		{
			i++;
			j++;
		}
		if (to_find[i] == '\0')
		{
			break;
		}
		else
			i = 0;
		j++;
	}
	return (&(str[j - i]));
}

int main(void)
{
	char *x = "23456789";
	char *y = "hello ar brother you are amazing";
	
	printf("%s\n", ft_strstr(y, x));
	printf("%s\n", strstr(y, x));
	
	return (0);
}