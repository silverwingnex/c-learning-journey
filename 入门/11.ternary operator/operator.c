#include <stdio.h>
int main()
{
    //(表达式) ? 结果1 : 结果2 三元运算符
    // 若表达式成立，取结果1，若不成立，取结果2
    
    //取a,b,c中的最大值
    int a;
    int b;
    int c;
    printf("请输入a,b,c的值(要求为整数)：");
    scanf("%d %d %d",&a,&b,&c);
    int temp;
    int max;
    temp = a>b ? a : b;
    max = c>temp ? c : temp;
    printf("最大数为%d\n",max);
    
    //90分及以上，赋A等 80分及以上，赋B等 70分及以上，赋C等
    char grade = max>=90 ? 'A' :
                 max>=80 ? 'B' :
                 max>=70 ? 'C' : 'D';
    printf("最终的等第为：%c\n",grade);
    
    return 0;
}