#include <stdio.h>
#include <math.h>//math头文件，包含了数学函数，如求次幂、平方根、向上取整、向下取整等
#include <time.h>//time头文件，包含了处理时间和日期的函数，如获取当前时间、计算时间差等
#include <stdlib.h>//standard library头文件,标准库，包含了很多常用的函数，如动态内存分配、随机数生成、排序等
#include <stdbool.h>//bool类型头文件，包含了bool类型的定义，可以使用true和false来表示布尔值

int main()
{
    double res1 = pow(2,3);//求次幂
    printf("%lf\n",res1);

    double res2 = sqrt(8);//求平方根
    printf("%lf\n",res2);
    //ceil向上取整 floor向下取整 abs求绝对值
    printf("%lf\n",ceil(3.2));
    printf("%lf\n",floor(3.2));
    printf("%d\n",abs(-5));

    long long res3 = time(NULL);//获取当前时间，形参表示获取的当前时间是否需要在其他地方进行存储
    printf("%lld\n",res3);//输出从1970年1月1日00:00:00 UTC(C语言诞生的时间)到当前时间的秒数

    //基于线性同余方程 x(n+1) = (a * x(n) + b) % m 生成伪随机数
    //rand()函数用于生成一个随机数，srand()函数用于设置随机数种子
    srand(1);//设置随机数的初始值，因为每一个随机数都是通过前一个数字经过一系列运算生成的，所以如果每次运行程序时都使用相同的种子，那么生成的随机数序列也会相同
    for (int i = 0; i <= 10; i++)
    {
        printf("%d\n",rand());
    }
    
    //两个小问题
    //种子不变，每次运行程序时生成的随机数序列都会相同
    srand(time(NULL));//使用当前时间作为随机数种子，这样每次运行程序时生成的随机数序列都会不同

    //随机数默认范围是0到RAND_MAX之间，RAND_MAX是一个常量，表示rand()函数能够返回的最大值，通常是32767
    //生成任意范围内的随机数，可以使用以下公式：
    //rand() % (max - min + 1) + min，原理是先生成一个0到(max-min)之间的随机数，然后再加上min，这样就得到了一个在min和max之间的随机数
    int min;
    int max;
    printf("请输入随机数的最小值：");
    scanf("%d",&min);
    printf("请输入随机数的最大值：");
    scanf("%d",&max);
    srand(time(NULL));
    int num = rand() % (max - min +1) +min;
    //猜数字游戏
    while (true){
        printf("请输入您要猜的数字");
        int guess;
        scanf("%d",&guess);
        if (guess < num){
            printf("小了\n");
        }
        else if(guess > num){
            printf("大了\n");
        }
        else{
            printf("恭喜你猜对了！\n");
            break;
        }
    }

    return 0;
}