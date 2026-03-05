//声明变量数据类型，先定义变量，再赋值
#include <stdio.h>
int main()
{
    int blood = 100;
    printf("对战-80\n");
    blood = blood - 80;
    printf("使用技能+60\n");
    blood = blood + 60;
    printf("当前血量为：%d\n",blood);
    return 0;
}