#include <unistd.h>

void poutside(char top[5], char bot[5], char lef[5], char rig[5])
{
    int i;
    i = 0;
    while(i <= 4)
    {
        write(1, &top[i], 1);
        i++;
    }
    write(1, ",", 1);
    i = 0;
      while(i <= 4)
    {
        write(1, &bot[i], 1);
        i++;
    }
    write(1, ",", 1);
    i = 0;
      while(i <= 4)
    {
        write(1, &lef[i], 1);
        i++;
    }
    write(1, ",", 1);
    i = 0;
      while(i <= 4)
    {
        write(1, &rig[i], 1);
        i++;
    }
}
