#include <stdio.h>

int main()
{
    //算术运算符

    //整数运算，结果一定是整数
    printf("%d\n",10/3);
    //小数参与计算，结果一定是小数
    printf("%lf\n",10/3.0);
    //取余，只能使用整数
    printf("%d\n",10%-3);
    printf("%d\n",-10%3);

    //拆分三位数
    printf("请输入一个三位数：");
    int num;
    scanf("%d",&num);
    int ge = num%10;
    int shi = num/10%10;
    int bai = num/100%10;
    printf("三位数%d的个位，十位，百位分别为%d,%d,%d\n",num,ge,shi,bai);
     
    //隐式转换，将取值范围小的数据类型转换为取值范围大的数据类型，二进制补0(不需要主动操作)
    //double>float>long long>long>int>short>char,小变大进行运算
    //char short类型进行运算时，结果直接隐式转换为int再进行运算
    short a = 1;
    short b = 2;
    int result = a+b;
    printf("result为%d,占用字节为%zu\n",result,sizeof(result));
    //强制转换，将取值范围大的数据，强行赋值给取值范围小的数据类型，直接去掉前面的字节
    //可能导致整数溢出之类的问题
    short result_s = (short)(a+b);
    printf("result_s为%d,占用字节为%zu\n",result_s,sizeof(result_s));

    //ASCII码 字符与数字进行转换时查询
    printf("以数字形式输出a+1:%d,以字符形式输出a+1:%c\n",'a'+1,'a'+1);
    return 0;
}