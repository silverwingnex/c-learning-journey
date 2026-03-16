#include <stdio.h>
int main()
{
    //统计2到100之间的质数数量
    int primenum = 0;
    for (int i = 2; i <= 100; i++)
    {
        int count = 0;
        for (int j = 2; j<i; j++)
        {
            if (i % j == 0)
            {
                count++;
                break;//跳出j的循环
            }
        }

        if (count == 0)
        {
            printf("%d是一个质数\n",i);
            primenum++;
        }
        else
        {
            printf("%d不是一个质数\n",i);
        }
    }
    printf("2到100之间共有%d个质数\n",primenum);

    return 0;

    //goto可跳转到指定代码行
}