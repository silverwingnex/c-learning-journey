#include <stdio.h>
//嵌套循环打印99乘法表
int main()
{
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d*%d=%d\t",i,j,i*j);//制表符，长度可变的大空格，会根据前面字母的个数在后面补空格
                                         //让整体长度达到8或8的倍数
        }
        printf("\n");
    }
    return 0;
}