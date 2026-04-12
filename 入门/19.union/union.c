#include <stdio.h>

//共用体是一种特殊的数据类型，它允许在同一内存位置存储不同类型的数据。共用体中的所有成员共享同一块内存，因此只能同时存储一个成员的值。
union money
{
    int moneyi;
    double moneyd;
    char moneys[20];
};
int main()
{
    union money m;
    //共用地址
    printf("money所在的内存地址为:%p\n",&m.moneyi);
    printf("moneyd所在的内存地址为:%p\n",&m.moneyd);
    printf("moneys所在的内存地址为:%p\n",&m.moneys);
    //所占内存大小，内存对齐
    printf("money占用的内存大小：%zu字节\n", sizeof(m));
    printf("moneyi占用的内存大小：%zu字节\n", sizeof(m.moneyi));//4
    printf("moneyd占用的内存大小：%zu字节\n", sizeof(m.moneyd));//8
    printf("moneys占用的内存大小：%zu字节\n", sizeof(m.moneys));//20,保证共用体的大小至少为最大成员的大小和对齐要求的倍数

    //共用体赋值
    m.moneyi = 100;
    printf("m.moneyi = %d\n", m.moneyi);
    m.moneyd = 3.14;
    printf("m.moneyd = %.2f\n", m.moneyd);
    printf("m.moneyi = %d\n", m.moneyi);//共用体成员共享内存，修改一个成员会影响其他成员的值
    //怎么存，怎么取，共用体的使用需要注意成员之间的关系和内存共享的特性。

    return 0;
}
//结构体本质是数据包,包含了一种数据类型的不同属性,可以理解为没有方法的类
//共用体本质是一个属性有多种表现形式,可以理解为一个变量有多种类型的值,但同一时刻只能存储一种类型的值
//内存分配:结构体的内存大小是所有成员大小之和,共用体的内存大小是最大成员的大小(都要加上内存对齐导致的空白字节)