//if 满足条件，执行语句体中的代码
#include <stdio.h>
int main()
{
    int source;//90分及以上，赋A等 80分及以上，赋B等 70分及以上，赋C等 否则，赋值D等
    char grade;
    printf("请输入该学生的考试成绩：\n");
    scanf("%d",&source);
    if (source > 100 || source < 0)//处理异常值
    {
        printf("该学生成绩异常\n");
    }
    else //正常进行赋等第
    {
        if (source >= 90)
        {
            grade = 'A';
        }
        else if (source >= 80 && source < 90)
        {
            grade = 'B';
        }
        else if (source >= 70 && source <80)
        {
            grade = 'C';
        }
        else
        {
            grade = 'D';
        }
         printf("该学生的考试成绩为%d,对应的等第为%c\n",source,grade);
    }
    
    return 0;
}