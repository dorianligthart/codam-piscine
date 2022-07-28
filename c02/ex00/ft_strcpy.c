/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/29 00:12:28 by dligthar      #+#    #+#                 */
/*   Updated: 2022/07/29 00:44:57 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return(dest);
}

// int main(int argc, char const *argv[])
// {
// 	char a[] = "qwertyyui";
// 	char b[] = "1234";
// 	printf("%s\n",ft_strcpy(a, b));
// 	return 0;
// }
