/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlowcase.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/29 00:55:52 by dligthar      #+#    #+#                 */
/*   Updated: 2022/07/29 01:07:22 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' || str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	str[i] = '\0';
	return(str);
}

// int main(int argc, char const *argv[])
// {
// 	char a[] = "afsdhjasdkncjkhqwb";
// 	printf("%s\n", ft_strupcase(a));
// 	return 0;
// }
