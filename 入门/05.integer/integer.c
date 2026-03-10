#include <stdio.h>
int main()
{
    //short 短整型 2byte
    short a = 32767;
    printf("%d\n%zu\n",a,sizeof(short));
    
    //int 整型 4byte
    int b = 2147483647;    
    printf("%d\n%zu\n",b,sizeof(int));

    //long 长整型 不同系统大小不同
    long c = 2147483647L;
    printf("%ld\n%zu\n",c,sizeof(long));

    //long long 超长整型
    long long d = 9223372036854775807LL;
    printf("%lld\n%zu\n",d,sizeof(long long));

    //无符号整型
    unsigned int f = 4294967295;
    printf("%u\n",f);//注意使用%u做占位符

    return 0;
}