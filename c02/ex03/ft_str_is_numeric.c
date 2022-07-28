/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_numeric.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/29 00:31:27 by dligthar      #+#    #+#                 */
/*   Updated: 2022/07/29 00:47:59 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] > '0' && str[i] < '9')
		{
			return(1);
		}		
		i++;
	}
	if (i == 0 && str[i] == '\0')
		return(1);
	return(0);
}

int main(int argc, char const *argv[])
{
	
	printf("%i \n",ft_str_is_numeric("567891203812904890124812917024017893"));
	return 0;
}