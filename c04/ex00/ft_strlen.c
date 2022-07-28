/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/28 19:05:10 by dligthar      #+#    #+#                 */
/*   Updated: 2022/07/28 19:13:22 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str)
{
	int i;
	
	i = 0;
	while (str[i] != '\0')
		i++;
	return(i);
}

// int main(int argc, char const *argv[])
// {
// 	printf("%i\n",ft_strlen("lalalalala"));
// 	return 0;
// }
