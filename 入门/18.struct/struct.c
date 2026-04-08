#include <stdio.h>
void modifyStudent(struct Student* pstu);

//结构体是一种用户自定义的数据类型，可以包含多个不同类型的成员变量。
struct Student
{   char name[20];
    int age;
    float score;
};

int main()
{
    //定义并初始化结构体变量
    struct Student stu1 = {"Alice", 20, 85.5};
    struct Student stu2 = {"Bob", 22, 90.0};
         
    //放入数组
    struct Student students[2] = {stu1, stu2};
    for (int i = 0; i < 2; i++)
    {
        printf("Name: %s, Age: %d, Score: %.2f\n", students[i].name, students[i].age, students[i].score);
    }

    //调用函数修改结构体变量
    modifyStudent(&stu1);
    printf("修改后的学生信息:\n");
    printf("Name: %s, Age: %d, Score: %.2f\n", stu1.name, stu1.age, stu1.score);

    return 0;
}

//结构体传参
void modifyStudent(struct Student* pstu)//正常传参即可
{
    printf("请修改Alice的学生信息:\n");
    scanf("%s %d %f", (*pstu).name, &((*pstu).age), &((*pstu).score));//name是数组，退化为指针

}
