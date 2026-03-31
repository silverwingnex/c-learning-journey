#include <stdio.h>
void swap(void* a, void* b, int len);

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

    //野指针: 指向的空间未分配
    //悬空指针: 指向的空间已经释放,如函数中局部变量的地址，函数结束后局部变量的空间被释放，对应指针就变成悬空指针

    //void*指针: 无类型指针，可以接收任意类型的指针记录的内存地址，但无法获取指针指向的数据，也无法进行指针运算
    int a = 10;
    int b = 20;
    printf("a = %d,地址为 %p\n", a, &a);
    printf("b = %d,地址为 %p\n", b, &b);
    printf("进行数据交换\n");
    swap(&a, &b, sizeof(int));
    printf("a = %d,地址为 %p\n", a, &a);
    printf("b = %d,地址为 %p\n", b, &b);
    //上述代码通过void*指针交换了数据的值
    //但如果要交换两个指针记录的数据地址(即指针本身)，就要用到二级指针
    //二级指针就是指针的指针，可以记录一级指针的地址，从而间接操作一级指针记录的数据地址
    printf("交换两个指针记录的数据地址，即两个变量的地址\n");
    int* pa = &a;
    int* pb = &b;
    int** ppa = &pa;
    int* ptemp = pa;
    *ppa = pb; //通过二级指针修改一级指针记录的数据地址
    pb = ptemp;
    printf("通过二级指针交换后pa = %p, pb = %p\n", pa, pb);

    return 0;
}


//交换两个变量记录的值
void swap(void* a, void* b, int len)
{
    char* pa = a;//步长为1字节，方便精确控制数据地址的每个字节
    char* pb = b;//void作为中介，可以接收任意类型的指针记录的内存地址，并转换为char*指针进行操作
    for (int i = 0; i < len; i++)//按步长操作任意类型的数据
    {
        char temp = *pa;
        *pa = *pb;
        *pb = temp;
        pa++;
        pb++;
    }
}