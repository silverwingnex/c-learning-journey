#include <stdio.h>

int main()
{
    //获取数组指针实际上是获取数组首元素的地址
    int arr[] = {1,2,3,4,5};
    int len = sizeof(arr) / sizeof(arr[0]);
    int* p = arr;
    //利用指针访问数组元素
    for (int i = 0; i < len; i++)
    {
        printf("%d ",*p);
        p++;
    }
    printf("\n");
    //arr参与计算时会被转换为指向数组首元素的指针，&arr除外
    printf("%p\n",arr);
    printf("%p\n",&arr);

    printf("%p\n",arr+1);//步长是一个元素的大小，因为arr是指向数组首元素的指针
    printf("%p\n",&arr+1);//步长是整个数组的大小，因为&arr是整个数组的地址

    return 0;

}