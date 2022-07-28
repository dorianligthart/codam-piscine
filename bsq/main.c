/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/07 20:00:46 by jvan-hal      #+#    #+#                 */
/*   Updated: 2022/07/27 12:38:37 by jvan-hal      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

void	readmap(char *fpath, char **map);
void	splitarray(char **map, int *numberofrows, char **characters);
int		validlines(char *map, char *characters);
int		validcharacters(char *characters);

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		char *map;
		char *characters;
		int numberofrows;
		char *tempnumber;

		numberofrows = 0;
		readmap(argv[1], &map);
		splitarray(&map, &numberofrows, &characters);
		printf("%i", validcharacters(characters));
		/*int x;
		
		x = 1;
		while (x < argc)
		{
			parseargv(argv[x]);
			write(1, "\n\n\n", 3);
		}*/
	}
	else
		write(2, "map error", 9);
	return (0);
}
