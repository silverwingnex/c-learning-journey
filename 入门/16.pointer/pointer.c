//指针就是一个变量，存储的是另一个变量的内存地址
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *a, int *b);//声明函数swap，参数为两个指针，指向需要交换的变量
void findMAXMIN(int arr[], int len, int* max, int* min);

int main(){
    //指针定义格式
    int a = 10;
    int* pa = &a;//定义一个指针变量p，存储a的地址
    printf("a的地址是%p\n", &a);//&为取地址操作符，获取变量a的内存地址
    printf("指针p的值是%p\n", pa);
    printf("变量a所占的内存大小是%zu字节\n", sizeof(a));
    printf("指针p所占的内存大小是%zu字节\n", sizeof(pa));//指针变量的大小与数据类型无关，通常是4或8字节，取决于系统架构
    
    //指针的作用
    //查询数据，通过指针访问变量的值
    printf("指针p指向的值是%d\n", *pa);// * 为解引用操作符，获取指针所指向地址上的数据
    //修改数据，通过指针修改变量的值
    *pa = 20;
    printf("修改后a的值是%d\n", a);

    //操作其他函数的变量，即让函数穿透自己的作用域（因为函数结束，局部变量会被销毁，所以无法改变外部变量）
    //此时需要通过指针找到外部变量，并进行操作
    int b = 30;
    int* pb = &b;
    swap(pa, pb);//调用swap函数，传入指针pa和pb，交换a和b的值
    printf("交换后a,b的值分别是%d,%d\n", a, b);

    //使函数返回多个值
    int arr[10];
    srand(time(NULL));
    for(int i = 0; i < 10; i++){
        arr[i] = rand() % 100 + 1;//生成1-100的随机数，存储在数组arr中
    }
    int len = sizeof(arr) / sizeof(arr[0]);
    printf("生成的随机数组为：\n");
    for(int i = 0; i<len; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    int max = arr[0];
    int min = arr[0];
    findMAXMIN(arr, len, &max, &min);
    printf("数组中的最大值是%d，最小值是%d\n", max, min);

}

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void findMAXMIN(int arr[], int len, int* max, int* min){
    *max = arr[0];
    *min = arr[0];
    for(int i = 1; i < len; i++){
        if(arr[i] > *max){
            *max = arr[i];
        }
        if(arr[i] < *min){
            *min = arr[i];
        }
    }
}