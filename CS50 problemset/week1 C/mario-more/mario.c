//like below:
//    #  #
//   ##  ##
//  ###  ###
// ####  ####
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
        for (int space = 0; space < height-i ; space++)//打印空格
        {
            printf(" ");
        }
        for (int hash = 0; hash < i; hash++)//打印#
        {
            printf("#");
        }
        printf("  ");//打印中间两格
        for (int hash = 0; hash < i; hash++)//打印空格
        {
            printf("#");
        }

        printf("\n");//换行
    }
    return 0;
}
