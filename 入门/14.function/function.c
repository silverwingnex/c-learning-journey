#include <stdio.h>
//返回值类型 函数名(形参1,形参2...)
//{
//    函数体;
//    return 返回值;
//}
//为什么要定义函数，写函数体
//需要什么参数去完成，写形参
//是否需要使用函数返回值，写返回值 需要写对应类型 不需要写void

//计算火影忍者手游无v7情况下，特权商店购买忍者碎片的性价比
double calculate_cost_per_piece(int num)
{
    int cost = num*578;
    int jifen;
    if (cost < 5000)//积分计算有四个分支三层判断，用 if-else 是最清晰的选择。三元运算符在这里不太合适
    {
        jifen = cost;
    }
    else if (cost < 10000)
    {
        jifen = cost+500;
    }
    else if (cost < 20000)
    {
        jifen = cost+1000;
    }
    else{
        jifen = cost+2000;
    }
    int num_gift = jifen/2080;
    int num_total = num + num_gift;
    double cpp = (double)cost / num_total;//将cost强制转换为 double 做除法，否则整数做除法会截断小数
    // 中间过程也打印出来，方便查看
    printf("购买: %d片, 花费: %d金币, 赠送: %d片, 总碎片: %d片\n",
           num, cost, num_gift, num_total);

    return cpp;
}

int main()
{
    int num;
    printf("请输入您要购买的忍者碎片数量:\n");
    scanf("%d",&num);
    //处理一下负数错误
    while (num < 0){
        printf("输入必须为自然数，请输入您要购买的忍者碎片数量:\n");
        scanf("%d",&num);
    }
    double cpp = calculate_cost_per_piece(num);
    printf("每片实际成本: %.2f 金币\n",cpp);

    return 0;
}