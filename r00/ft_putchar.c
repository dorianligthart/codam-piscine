/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putchar.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/10 05:06:49 by dligthar      #+#    #+#                 */
/*   Updated: 2022/07/29 01:13:27 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char begin, char middle, char end, int x)
{
	int	a;
	
	a = 2;
	write (1, &begin, 1);
	while (a < x)
	{
		write(1, &middle, 1);
		a++;
	}
	if (2 <= x)
		write(1, &end, 1);
	write(1, "\n", 1);
}
