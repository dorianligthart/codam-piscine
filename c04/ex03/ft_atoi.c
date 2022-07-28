/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/28 20:44:09 by dligthar      #+#    #+#                 */
/*   Updated: 2022/07/28 22:59:25 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strtoint(char c)
{
	return(c - '0') ;
}

int	ft_atoi(char *str)
{
	int i;
	int j;
	int k;
	int l;
	int result;
	
	i = 0;
	j = 0;
	k = 0;
	l = 1;
	while (str[i] != '\0')
	{
		if(str[i] == '-' && k == 0)
			j++;
		if (str[i] >= '0' && str[i] <= '9')
		{			
			str[i] = result + (ft_strtoint(str[i]) * l);
			l++;
		}
		if (!(str[i] <= '0' && str[i] >= '9') && (str[i-1] >= '0' && str[i-1] <= '9'))
			break;
		i++;
	}
	if (j % 2 != 0 && k == 0)
		result = result * (-1);
	return (result);
}

int main(int argc, char const *argv[])
{
	printf("%i ", ft_atoi(" ---+--+1234ab567"));
	return 0;
}
