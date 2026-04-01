#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

    //二维数组arr[m][n]，m是二维数组长度,n是每一个一维数组长度
    int arr2[3][4] = {0};
    srand(time(NULL));
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            arr2[i][j] = rand() % 101;
        }
    }
    //利用索引访问二维数组元素
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\t",arr2[i][j]);
        }
        printf("\n");
    }
    //利用指针访问二维数组元素
    //二维数组指针在计算中退化为指向一维数组的指针，即指向二维数组首元素的指针
    //数据类型int[n]，n是每一个一维数组的长度,在这里即为int (*p2)[4] = arr2;
    int (*p2)[4] = arr2;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\t",*(*p2 + j));//p2是指向二维数组首元素一维数组的指针，*p2是一维数组的首元素地址
        }
        printf("\n");
        p2++;//指向下一行
    }

    //指针数组
    int arr31[4] = {1,2,3,4};
    int arr32[4] = {5,6,7,8};
    int* arr3[2] = {arr31,arr32};//指针数组，存储的是指针，即一维数组的地址
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\t",*arr3[i] + j);//arr3[i]是指针，即一维数组的地址，arr3[i][j]是访问一维数组元素
        }
        printf("\n");
    }

    return 0;
}