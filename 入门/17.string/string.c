#include <stdio.h>

int main()
{
    //定义字符串
    // 1.利用字符数组
    char str[4] = "abc";
    printf("%s\n", str);
    //本质上是一个字符数组，最后一个元素是'\0'，字符串结束标志
    //数组长度可以不写，若要写，则需要预留一个位置给'\0'
    //以此方式定义的字符串是可修改的
    str[0] = 'A';
    printf("%s\n", str);

    // 2.利用指针
    char* str2 = "abcd";
    printf("%p\n", str2);
    printf("%s\n", str2);
    //以此方法定义的字符串会被存储在只读数据区
    //只读数据区的特点
    //数据不可修改，定义的字符串可以复用（不会重复存储相同的字符串）

    //键盘录入字符串
    char str3[100];
    printf("请输入一个字符串：");
    scanf("%s", str3);//不用&，因为str3是一个数组名，代表数组的首地址
    printf("你输入的字符串是：%s\n", str3);
    //遍历录入的字符串
    int i = 0;
    while (str3[i] != '\0')
    {
        printf("%c ", str3[i]);
        i++;
    }
    printf("\n");

    //字符串数组
    char str4[3][6] = {"abc", "def", "ghi"};
    printf("定义的字符串数组为:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%s\n", str4[i]);
    }

    return 0;
}