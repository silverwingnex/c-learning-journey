#include <stdio.h>
//switch 表达式只能为(字符/整数)
//case 值只能是字符/整数，不能是变量，值不允许重复
//break 表示中断,结束的意思,结束switch
//default 所有情况都不匹配,执行该处的内容
//周一 跑步
//周二 游泳
//周三 慢走
//周四 动感单车
//周五 拳击
//周六 爬山
//周七 好好吃一顿
int main()
{
    int week;
    printf("今天是周几:\n");
    scanf("%d",&week);
    //利用switch语句 寻找对应的运动
    switch (week)
    {
    case 1:
        printf("去跑步");
        break;
    case 2:
        printf("去游泳");
        break;
    case 3:
        printf("去慢走");
        break;
    case 4:
        printf("去骑动感单车");
        break;
    case 5:
        printf("去拳击");
        break;
    case 6:
        printf("去爬山");
        break;
    case 7:
        printf("去好好吃一顿");
        break;
    default:
        printf("不存在该星期");
        break;
    }
    return 0;
}
//当case下有大段重复代码时，可使用case穿透功能
//即当某段case分支未以break结尾，程序将顺序执行后继case分支，直到遇见break
//有限个case进行匹配，使用switch，执行效率较高
//对范围进行判断用if