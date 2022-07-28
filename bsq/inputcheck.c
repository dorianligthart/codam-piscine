/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   inputcheck.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/07 20:00:46 by jvan-hal      #+#    #+#                 */
/*   Updated: 2022/07/27 12:35:03 by jvan-hal      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

/*void parseargv(char *u_argv)
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
}*/

int	countfirstline(char *map)
{
	int i;

	i = 0;
	while (map[i] != '\n')
	{
		i++;
	}
	return (i);
}

int	validlines(char *map, char *characters)
{
	int	i;
	int	j;
	int	linelength;

	i = 0;
	j = 0;
	linelength = 0;
	while (map[i] != '\n')
	{
		linelength++;
		i++;
	}
	i++;
	while (map[i])
	{
		if (map[i] != '\n')
			j++;
		else
			j = 0;
		if (j % linelength == 0 && map[j] != '\n')
			return (0);
		i++;
	}
	return (1);
}

int	validcharacters(char *characters)
{
	int	i;
	int	j;

	i = 0;
	while (i < 3)
	{
		j = 0;
		while (j < 3)
		{
			if (i != j && characters[i] == characters[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	splitarray(char **map, int *numberofrows, char **characters)
{
	int		length;
	int		i;
	int		j;
	char	*tempnumber;

	length = countfirstline(*map);
	*characters = (char *)malloc(4);
	tempnumber = (char *)malloc(length - 2);
	i = 0;
	j = 0;
	while (**map != '\n')
	{
		if (i < length - 3)
		{
			tempnumber[i] = **map;
		}
		else
		{
			*characters[j] = **map;
			j++;
		}
		i++;
		*map = *map + 1;
	}
	tempnumber[i] = '\0';
	*characters[4] = '\0';
	*map = *map + 1;
	*numberofrows = atoi(tempnumber);
}

/*int	isvalid()
{
}*/

void	readmap(char *fpath, char **map)
{
	int		fd;
	int		i;
	int		length;
	int		readstatus;
	char	temp;

	i = 0;
	length = 0;
	readstatus = 1;
	fd = open(fpath, O_RDONLY);
	if (fd != -1)
	{
		while (readstatus != 0 && fd != 0)
		{
			readstatus = read(fd, &temp, 1);
			length++;
		}
		close(fd);
		*map = (char *)malloc(length);
		fd = open(fpath, O_RDONLY);
		readstatus = 1;
		readstatus = read(fd, *map, length);
		close(fd);
	}
}