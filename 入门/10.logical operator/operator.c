#include <stdio.h>
int main()
{
    // &&与 ||或 !取反
    int num;
    printf("请输入一个两位整数：\n");
    scanf("%d",&num);
    //要求输入数字不包含7，不符合要求则输出0
    int ge = num%10;
    int shi = num/10;
    printf("%d\n",ge!=7 && shi!=7);
    //进一步要求输入数字不能为7的倍数
    printf("%d\n",ge!=7 && shi!=7 && num%7!=0);

    //或运算符
    printf("%d\n",0||1);
    
    //当左侧表达式，能确定整个表达式结果时，右边将不会继续计算，即短路效果
    //如&&,左侧为0，则直接输出0，不判断右侧；||,左侧为1，则直接输出1

    return 0;
}