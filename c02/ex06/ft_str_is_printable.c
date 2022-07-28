/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_printable.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/29 00:52:54 by dligthar      #+#    #+#                 */
/*   Updated: 2022/07/29 01:01:51 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 127)
		{
			return(1);
		}		
		i++;
	}
	if (i == 0 && str[i] == '\0')
		return(1);
	return(0);
}

// int main(int argc, char const *argv[])
// {
	
// 	printf("%i \n",ft_str_is_alpha(""));
// 	return 0;
// }
