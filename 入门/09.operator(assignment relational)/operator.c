#include <stdio.h>
int main()
{
    //assignment operator 赋值运算符
    int a = 10;
    int b = 20;
    a += b; //将b的值加给a
    printf("%d %d\n",a,b);
    //同理，-= *= /= %= 也是左右两数进行对应计算
    
    //relational operator 关系运算符，1为true，0为false
    printf("%d%d%d%d%d%d\n",a == b,a != b,a > b,a < b,a >= b,a <= b);
}