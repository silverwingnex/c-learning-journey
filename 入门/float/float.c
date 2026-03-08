#include <stdio.h>
int main()
{
    //float 单精度小数 4byte
    float a = 3.14F;
    printf("%.2f\n%zu\n",a,sizeof(float));
    //double 双精度小数 8byte
    double b =1.78;
    printf("%.2lf\n%zu\n",b,sizeof(double));
    return 0;
}
//无法与unsigned组合,C语言小数默认double类型