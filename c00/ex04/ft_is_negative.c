/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_is_negative.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/12 14:44:57 by dligthar      #+#    #+#                 */
/*   Updated: 2022/07/21 14:35:52 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n >= 0)
		write(1, "P", 1);
	else
		write (1, "N", 1);
}

// int main(void)
// {
// 	ft_is_negative(1234);
// 	return 0;
// }
