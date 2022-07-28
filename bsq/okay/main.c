/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/07 20:00:46 by jvan-hal      #+#    #+#                 */
/*   Updated: 2022/07/26 15:48:49 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>


void parseargv(char *u_argv)
{
	int i;
	
	i = 0;
	while (u_argv[i] != '\n' || u_argv[i] != '\0')
	{
		i++;
	}
	if (u_argv[i-1] == '\n')
	{
		getinputstd(u_argv);
	}
	else if (u_argv[i-1] != '\0')
	{
		getinputfile(u_argv);
	}
	else
	{
		write(2, "map error", 9);
	}
}

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		int x;
		
		x = 1;
		while (x < argc)
		{
			parseargv(argv[x]);
		}	 
	}
	else if (argc == 1)
	{
		
	}
	else
		write(2, "map error", 9);
	return (0);
}
