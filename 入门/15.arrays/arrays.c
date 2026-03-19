#include <stdio.h>
void printArray(int arr[]);

int main()
{
    //定义数组(连续的空间，长度不可变，存储相同类型的数据)
    int arr1[10];//定义一个长度为10的整型数组
    double arr2[10];//定义一个长度为10的双精度浮点型数组

    //数组的初始化
    //若数组长度大于初始化元素的个数，未赋值部分为默认值
    //整数类型默认值为0，浮点类型默认值为0.0，字符类型默认值为'\0'，字符串默认为NULL
    int arr3[5] = {1, 2, 3};

    //数组元素的访问
    //数组元素通过索引访问，索引从0开始
    printf("arr3[0] = %d\n",arr3[0]);
    printf("修改前，arr3[4] = %d\n",arr3[4]);
    arr3[4] = 5;
    printf("修改后，arr3[4] = %d\n",arr3[4]);

    //数组的遍历
    for (int i = 0; i<5; i++){
        printf("arr3[%d] = %d\n",i,arr3[i]);
    }
    
    //获取数组的内存地址
    printf("arr3的内存地址为:%p\n",arr3);//不用&，数组名表示数组的首地址
    printf("arr3[1]的内存地址为:%p\n",&arr3[1]);//索引表示偏移量，偏移量为4字节（int类型大小），&表示取地址

    //数组的长度
    int length = sizeof(arr3) / sizeof(arr3[0]);//数组总大小除以单个元素大小
    printf("arr3的长度为:%d\n",length);

    //数组作为函数参数，实际上传递的是数组的首地址
    //在line 12中，定义的arr1为完整的数组类型，但在函数参数中，数组会退化为指针类型
    printf("在main函数中，arr3的大小为:%zu\n", sizeof(arr3));
    
    printArray(arr3);//传递数组名，实际上传递的是数组的首地址

    return 0;
}
//演示arr作为函数参数传入
void printArray(int arr[]){
    printf("在printArray函数中，arr的大小为:%zu\n", sizeof(arr));
}
//因此，若要在函数中使用数组的长度，必须将数组长度作为参数传入