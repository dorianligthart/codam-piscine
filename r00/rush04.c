/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rush04.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/10 06:11:13 by dligthar      #+#    #+#                 */
/*   Updated: 2022/07/29 01:14:20 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	rushall(int x, int y)
{
	int	a;
	
	a = 2;
	ft_putchar('A', 'B', 'C', x);
	while (y > a)
	{
		ft_putchar('B', ' ', 'B', x); //writes new line a amount of times.
		a++;
	}
	if (y >= 2)
	ft_putchar('C', 'B', 'A', x);
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
		rushall(x, y);
	else
		write(1, "Please use positive integers.\n", 30);
}
