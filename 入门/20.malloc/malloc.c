#include <stdio.h>
#include <stdlib.h>

void method(int* p, int size);

int main()
{
    //malloc申请一片连续空间，返回一个指向这片空间的void指针
    //free释放malloc申请的空间
    int* p = malloc(sizeof(int)*10);//没有步长概念，需要强制转换
    int p_size = 10; // 记录申请的大小
    printf("申请的内存地址为%p\n", p); // 输出指针地址
    for (int i = 0; i < 10; i++){
        *(p+i) = i + 1;
    }
    method(p, p_size);

    free(p); // 释放动态分配的内存

    return 0;
}

//注意点
// malloc返回的是首地址，没有总大小，可以定义一个变量来记录申请的大小，也方便传入函数
void method(int* p, int size){
    for (int i = 0; i < size; i++){
        printf("%d ", *(p+i));
    }
    return;
}
// malloc申请的内存过多，会产生虚拟内存，申请失败时会返回NULL指针，使用前需要检查指针是否为NULL
// malloc申请的内存需要手动释放，否则会造成内存泄漏

//relloc后内存可能变(原内存块后无足够空间)，需要重新分配内存并复制原数据，若空间足够则直接扩展

