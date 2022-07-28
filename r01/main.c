/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: dligthar <dligthar@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/17 01:40:32 by dligthar      #+#    #+#                 */
/*   Updated: 2022/07/17 19:33:45 by dligthar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void convert(char list[]);
void combine(char top[5], char bot[5], char lef[5], char rig[5]);

int main(void)
{
    convert("4 3 2 1 1 2 2 2 3 3 2 1 1 2 2 2");
    return (0);
}


//      ./rush-01 "col1up col2up col3up col4up col1down col2down col3down col4down row1left row2left
//      row3left row4left row1right row2right row3right row4right"
//      ./rush-01 "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2" | cat -e

