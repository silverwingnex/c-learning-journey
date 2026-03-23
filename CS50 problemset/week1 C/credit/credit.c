// 信用卡号码验证,luhn算法
//AMEX 34或37开头，长度为15位
//MasterCard 51-55开头，长度为16位
//Visa 4开头，长度为13或16位
#include <stdio.h>

int get_length(long long number)
{
    int length = 0;
    while (number > 0)
    {
        number /= 10;
        length++;
    }
    return length;
}

int main()
{
    long long card_number;
    printf("请输入信用卡号码: ");
    scanf("%lld", &card_number);
    int len = get_length(card_number);
    if (len < 13 || len > 16)
    {
        printf("长度不对，无效的信用卡号码\n");
        return 0;
    }
    while (card_number > 0)
    {
        card_number /= 10;
        if (card_number == 34 || card_number == 37 && len == 15)
        {
            printf("AMEX\n");
            return 0;
        }
        else if (card_number >= 51 && card_number <= 55 && len == 16)
        {
            printf("MasterCard\n");
            return 0;
        }
        else if (card_number / 10 == 4 && (len == 13 || len == 16))
        {
            printf("Visa\n");
            return 0;
        }
        else
        {
            printf("请检查长度与开头是否匹配，无效的信用卡号码\n");
            return 0;
        }
    }
}
//已经解决长度和开头可能不匹配的问题