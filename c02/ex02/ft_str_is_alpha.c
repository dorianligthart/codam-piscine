/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_alpha.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/29 00:31:27 by dligthar      #+#    #+#                 */
/*   Updated: 2022/07/29 00:47:37 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] <= 64 || (str[i] >= 91 && str[i] <= 96) || str[i] >= 123)
		{
			return(0);
		}		
		i++;
	}
	if (i == 0 && str[i] == '\0')
		return(1);
	return(1);
}

int main(int argc, char const *argv[])
{
	
	printf("%i \n",ft_str_is_alpha(""));
	return 0;
}
