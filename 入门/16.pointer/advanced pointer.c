#include <stdio.h>

int main()
{
    //指针运算
    //步长是数据类型的大小，指针移动一个步长就是移动一个数据类型的大小
    int arr[5] = {1, 2, 3, 4, 5};
    int* p = &arr[0]; //指针指向数组的首元素
    printf("p = %p\n", p); //输出指针的地址
    p++; //指针移动一个步长
    printf("p = %p\n", p); //输出指针的地址
    printf("*p = %d\n", *p); //输出指针指向的值
    int interval = &arr[1] - &arr[0]; //计算两个指针之间的间隔
    printf("指针的间隔interval = %d字节\n", interval); //输出间隔
}