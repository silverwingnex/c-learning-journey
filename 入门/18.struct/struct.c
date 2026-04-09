#include <stdio.h>
#include <string.h>

void modifyStudent(struct Student* pstu);

//结构体是一种用户自定义的数据类型，可以包含多个不同类型的成员变量。
struct message//结构体嵌套
{
    char phone[12];
    char email[30];
};

struct Student
{   char name[20];
    int age;
    float score;
    struct message msg;//结构体嵌套  
};

int main()
{
    //定义并初始化结构体变量
    struct Student stu1;
    strcpy(stu1.name, "Alice");
    stu1.age = 20;
    stu1.score = 85.5;
    strcpy(stu1.msg.phone, "1234567890");
    strcpy(stu1.msg.email, "alice@example.com");

    struct Student stu2 = {"Bob", 22, 90.0, {"1234567890", "bob@example.com"}};
         
    //放入数组
    struct Student students[2] = {stu1, stu2};
    for (int i = 0; i < 2; i++)
    {
        printf("Name: %s, Age: %d, Score: %.2f, Phone: %s, Email: %s\n", students[i].name, students[i].age, students[i].score, students[i].msg.phone, students[i].msg.email);
    }

    //调用函数修改结构体变量
    modifyStudent(&stu1);
    printf("修改后的学生信息:\n");
    printf("Name: %s, Age: %d, Score: %.2f, Phone: %s, Email: %s\n", stu1.name, stu1.age, stu1.score, stu1.msg.phone, stu1.msg.email);

    return 0;
}

//结构体传参
void modifyStudent(struct Student* pstu)//正常传参即可
{
    printf("请修改Alice的学生信息:\n");
    scanf("%s %d %f %s %s", (*pstu).name, &((*pstu).age), &((*pstu).score), (*pstu).msg.phone, (*pstu).msg.email);//name是数组，退化为指针

}
