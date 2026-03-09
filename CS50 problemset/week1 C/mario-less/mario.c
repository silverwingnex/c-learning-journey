//In a file called mario.c in a folder called mario-less,implement a program in C that pyramid,using hashes(#) for bricks ,as in the below:
//        #
//       ##
//      ###
//     ####
//    #####
//   ######
// ########
#include <stdio.h>
int main()
{
    int height;
    do
    {
        printf("height: ");
        scanf("%d", &height);
    }
    while(height < 1 || height > 8);
    for (int i = 1; i <= height; i++)
    {
        for (int j = height - i; j > 0; j--)
        {
            printf(" ");
        }
        for (int b = 0; b < i; b++)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}