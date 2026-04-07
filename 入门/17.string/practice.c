#include <stdio.h>

int main()
{
    //用户登录，三次机会
    char* rightusername = "admin";
    char* rightpassword = "123456";

    char username[20];
    char password[20];

    for (int i = 0; i < 3; i++)
    {
        printf("请输入用户名：");
        scanf("%s", username);
        printf("请输入密码：");
        scanf("%s", password);

        if (strcmp(username, rightusername) == 0 && strcmp(password, rightpassword) == 0)
        {
            printf("登录成功！\n");
            break;
        }
        else
        {
            printf("用户名或密码错误！\n");
            if (i == 2)
            {
                printf("三次登录失败，账号已锁定！\n");
            }
            else 
            {
                printf("你还有%d次机会！\n", 2 - i);
            }
        }
    }

    //分别记录字符串中大小写字母和数字的个数
    printf("请输入一个字符串：");
    char str[100];
    scanf("%s", str);
    int uppercount = 0;
    int lowercount = 0;
    int digitcount = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            uppercount++;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            lowercount++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            digitcount++;
        }
    }
    printf("大写字母个数:%d\n", uppercount);
    printf("小写字母个数:%d\n", lowercount);
    printf("数字个数:%d\n", digitcount);

    return 0;
}