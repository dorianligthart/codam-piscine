/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_combn.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/14 21:45:02 by dligthar      #+#    #+#                 */
/*   Updated: 2022/07/18 20:59:46 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	recurse(int n, int t, int b, char *s)
{
	int	i;

	s[t] = 48 + b;
	if (t == n - 1)
	{
		if (b == n - 1)
		{
		}
		else
			write(1, ", ", 2);
		write(1, s, n);
	}
	else
	{
		i = b + 1;
		while (i <= 9)
		{
			recurse(n, t + 1, i++, s);
		}
	}
}

void	ft_print_combn(int n)
{
	char	s[10];
	int		i;

	i = 0;
	while (i < 10)
		recurse(n, 0, i++, s);
}

// int	main(int argc, char *argv[])
// {
// 	if (argc == 2)
// 	{
// 		if (argv[1][1])
// 		{
// 			write(1, "one integer expected as first argument.", 39);
// 		}
// 		else
// 			ft_print_combn(argv[1][0] - 48);
// 	}
// 	else if (argc > 2)
// 	{
// 		write(1, "too many arguments supplied.", 28);
// 	}
// 	else
// 		write(1, "one argument expected.", 22);
// 	return (0);
// }
