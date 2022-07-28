#include <stdio.h>
#include <unistd.h>

void grid(char map[4][4]);

void combine(char top[5], char bot[5], char lef[5], char rig[5])
{

    printf("\nthats our input converted to outside grid:\n");
    printf("- top:     %s \n", top);    // map[0][i]
    printf("- bottom:  %s \n", bot);    // map[3][i]
    printf("- left:    %s \n", lef);    // map[i][0]
    printf("- right:   %s \n\n", rig);  // map[i][3]
    
    char map[4][4];
    int i;
    int j;

    i = 0;
    j = 0;


    int a;
    int b;
    int c;
    int d;

    // while (d <= 4)
    // {
    //     while (j <= 4)
    //     {
        
            
        
    //         j++;
    //     }
    //     i++;
    // }
    
}



/*

1:   a  b  c  d
2:   e  f  g  h 
3:   i  j  k  l
4:   m  n  o  p


*/