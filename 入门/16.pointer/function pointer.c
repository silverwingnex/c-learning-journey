#include <stdio.h>
#include <stdlib.h>
void method1();
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int divide(int a, int b);

int main()
{
    //函数指针是指向函数的指针变量，函数指针的类型由函数的返回值类型和参数列表决定
    //语法：返回值类型 (*函数指针变量名)(参数列表) = 函数名;
    void (*method1_ptr)() = method1;
    method1_ptr();//通过函数指针调用函数，void类型无法获取指向的数据，所以不能解引用

    //例：用户输入两个整数，再输入(1,2,3,4)选择加减乘除运算
    int a,b,choice;
    printf("请输入两个整数：\n");
    scanf("%d %d",&a,&b);
    if (b == 0)
    {
        printf("除数不能为0\n");
        return 1;
    }
    printf("请选择运算(1.加法 2.减法 3.乘法 4.除法)：");
    scanf("%d",&choice);
    //定义函数指针数组，存储四个运算函数的地址
    int (*funcptr[4])(int,int) = {add,sub,mul,divide};
    if (choice >= 1 && choice <= 4)
    {
        int result = funcptr[choice - 1](a,b);//通过函数指针调用对应的运算函数
        printf("结果为：%d\n",result);
    }
    else
    {
        printf("无效的选择\n");
    }

    return 0;
}

void method1()
{
    printf("This is method 1\n");
}

int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int mul(int a, int b)
{
    return a * b;
}
int divide(int a, int b)
{
    return a / b;
}