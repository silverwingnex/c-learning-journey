#include <stdio.h>

int main()
{
    //知道循环次数或循环范围时，使用for循环较好
    //只知道循环的结束条件，使用while循环

    //录入一个整数，判断该数是否为2的次幂,若为，则输出为2的几次幂
    int num;
    printf("请输入一个整数：\n");
    scanf("%d",&num);
    int count = 0;
    while (num > 1 && num % 2 ==0)
    {
        num /= 2;
        count += 1;
    }
    if (num == 1)
    {
        printf("该数为2的%d次幂\n",count);
    }
    else
    {
        printf("该数不是2的次幂\n");
    }

    //珠穆朗玛峰高度为8844.43米
    //我有一张足够大的纸，厚度为0.1毫米，请问折叠多少次，可以超过珠穆朗玛峰的高度
    int height = 8844430;
    double paper_h = 0.1;
    int count_2 = 0;
    while (paper_h <= height)
    {
        paper_h *= 2;
        count_2 += 1;
    }
    printf("需要折纸%d次\n",count_2);

    //将整数进行反转
    int number;
    printf("请输入一个整数：\n");
    scanf("%d",&number);
    int temp = number;
    int rev = 0;
    while (number != 0)
    {
        int temp = number % 10;
        number /= 10;
        rev = rev*10 + temp;
    }
    printf("%d反转之后的数值为%d\n",temp,rev);

    //输入两个整数，除数divisor，被除数dividend，要求不使用除法，乘法，取余得到商quotient和余数
    int dividend;
    int divisor;
    printf("请输入两个整数,第一个为被除数,第二个为除数：\n");
    scanf("%d %d",&dividend,&divisor);
    int quotient = 0;//商即执行减法的次数
    while (dividend >= divisor)
    {
        dividend -= divisor;
        quotient += 1;
    }
    printf("商为%d,余数为%d",quotient,dividend);//余数即执行完数次减法后，剩下的数字
    
    return 0;
}