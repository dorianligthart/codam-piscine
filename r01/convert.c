#include <stdio.h>
#include <unistd.h>

void combine(char top[5], char bot[5], char lef[5], char rig[5]);


void convert(char list[])
{
    char top[5];
    char bot[5];
    char lef[5];
    char rig[5];
    int i;
    int j;
    
    i = 0;
    j = 0;
    while (i < 32)
    {
        if (list[i] > 48 && list[i]  < 53 )
        {
            if (i <= 6)
            {
                top[j] = list[i];
            }
            else if (i <= 14)
            {
            bot[j-4] = list[i];
            }
            else if (i <= 22)
            {
                lef[j-8] = list[i];
            }
            else if (i <= 30)
            {
                rig[j-12] = list[i];
            }
            i = i+2;
            j++;
        }
        else
        {
            write(1, "Input error; fill digits from 1,2,3,4 with spaces in between\n",60);
            i = 33;
        }
    }
    combine(top, bot, lef, rig);
}
