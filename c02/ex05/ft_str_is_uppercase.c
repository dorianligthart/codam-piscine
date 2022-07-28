/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_uppercase.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/29 00:50:07 by dligthar      #+#    #+#                 */
/*   Updated: 2022/07/29 00:52:28 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] > 64 && (str[i] < 91)
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
	ft_str_is_uppercase("SAJKDASDJHAKSDJAKSHZZZ")
	return 0;
}
