#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char get_max(struct viewpoint *vps, int n);

struct viewpoint
{
    char name;//0
    int votes;//1 2 3 4 后面是空字符补齐4的倍数8
};

int main()
{
    //四个景点ABCD,选一个出游,80人投票，选择票数多的景点
    //若票数相同，A优于B，B优于C，C优于D
    //投票情况用随机数模拟
    struct viewpoint vp[4] = { {'A', 0}, {'B', 0}, {'C', 0}, {'D', 0} };
    srand(time(NULL));
    //模拟80人投票
    for (int i = 0; i < 80; i++)
    {
        int vote = rand() % 4; //生成0-3的随机数,对应四个景点
        vp[vote].votes++; //对应景点票数加1
    }
    //统计票数最多的景点
    //写个获取最大值的函数
    char max_name = get_max(vp, 4);
    printf("投票结果:\n");
    for (int i = 0; i < 4; i++)
    {
        printf("%c: %d票\n", vp[i].name, vp[i].votes);
    }
    printf("得票最多的景点是: %c\n", max_name);

    //结构体占用的内存大小
    //内存对齐，因为硬件按块读取内存
    printf("结构体占用的内存大小: %zu字节\n", sizeof(struct viewpoint));

    return 0;
}

//最大值函数
char get_max(struct viewpoint *vps, int n)
{
    struct viewpoint max = vps[0];
    for (int i = 1; i < n; i++)
    {
        if (vps[i].votes > max.votes)
        {
            max = vps[i];
        }
        else if (vps[i].votes == max.votes && vps[i].name < max.name) //票数相同，优先级比较
        {
            max = vps[i];
        }
    }

    return max.name;
}
//内存对齐注意点
//1.结构体成员的顺序会影响内存占用，建议将小类型放在前面，大类型放在后面，以减少填充字节的数量
//2.结构体内可能会有填充字节，以满足对齐要求