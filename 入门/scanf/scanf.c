#include <stdio.h>
int main()
{
    //键盘录入基本使用
    //定义一个变量用于接收数据
    int a;
    //键盘录入
    printf("请输入一个整数");//提醒一下用户
    scanf("%d",&a);//注意使用&
    printf("变量a的值为：%d\n",a);

    //字符串定义
    //英文：1个字母，符号，数字占用一个字节
    //中文：1个汉字占用两个字节
    //结束标记：1个字节
    char str[4] = "aaa";
    printf("%s\n",str);
    printf("%zu\n",sizeof(str));
    //字符串录入
    char name[10];
    printf("请输入您的姓名");
    scanf("%s",&name);
    printf("您的姓名为%s\n",name);

    //录入多个变量
    int num1;
    int num2;
    printf("请输入两个整数");
    scanf("%d %d",&num1,&num2);
    printf("%d",num1+num2);

    return 0;
}