/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_lowercase.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/29 00:45:31 by dligthar      #+#    #+#                 */
/*   Updated: 2022/07/29 00:52:15 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a') || str[i] <= 'z')
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
	printf("%i\n",ft_str_is_lowercase("dhaksdjaksdja"));
	return 0;
}
