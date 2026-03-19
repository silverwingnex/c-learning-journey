 //用25,10,5,1的面值，计算出给定金额的最少纸币数量
 #include <stdio.h>

 int main()
 {
    int num;
    printf("请输入金额:\n");
    scanf("%d",&num);
    int count = 0;
    while(num >= 25)
    {
        num -= 25;
        count++;
    }
    while(num >= 10)
    {
        num -= 10;
        count++;
    }
    while(num >= 5)
    {
        num -= 5;
        count++;
    }
    while(num >= 1)
    {
        num -= 1;
        count++;
    }
    printf("最少需要 %d 张纸币\n", count);
    
    return 0;

 }