/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/29 00:25:55 by dligthar      #+#    #+#                 */
/*   Updated: 2022/07/29 00:44:51 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (dest[i] != '\0' && i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return(dest);
}

// int main(int argc, char const *argv[])
// {
// 	char a[] = "1234567890";
// 	char b[] = "qwerty";
// 	printf("%s\n",ft_strncpy(a, b, 6));
// 	return 0;
// }
