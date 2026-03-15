#include <stdio.h>
//循环，即重复执行，满足条件即执行循环体中的语句
int main()
{
    //求1到5累加求和
    int sum = 0;
    for (int i = 1; i<=5; i++)
    {
        sum += i;
        printf("%d\n",sum);
    }
    
    //结合其他语句,求1到100的偶数和
    int even_sum = 0;
    for (int i = 1; i<=100; i++)
    {
        if (i % 2 == 0)
        {
            even_sum += i;
        }
    }
    printf("%d",even_sum);

    //键盘录入两个数字，表示一个范围，统计该范围中既能被8整除，也能被6整除的数字个数
    int num1;
    int num2;
    printf("请录入两个整数：\n");
    scanf("%d %d",&num1,&num2);
    //统计范围需要考虑大小问题
    int max = num1>num2 ? num1 : num2;
    int min = num1<num2 ? num1 : num2;
    int count = 0;//计数器·
    for (int i = min; i<=max; i++)
    {
        if (i%6 == 0 && i%8 == 0)
        {
            count++;
        }
    }
    printf("在%d到%d中，能同时被6和8整除的数有%d个\n",min,max,count);

    return 0;
}