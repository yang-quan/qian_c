#include <stdio.h>
#include <string.h>
struct stud //定义一个结构体
{
    int age;
    char *name;
    int score;
};
void  out(struct stud *s) //定义一个指向结构体的指针
{
    printf("age=%d\n",s->age);//取出初始化结构体的值
    printf("name=%s\n",s->name);//使用指向该结构的指针,访问结构的成员，必须使用 -> 运算符
    printf("score=%d\n",s->score);
}

int main()
{
    struct stud std= //初始化结构体stud 类型std
    {                //声明 std，类型为 stud
        .age = 18,
        .name = "yang",
        .score = 99,
    };
    out(&std); //通过传 std 的地址来输出 std 信息

}
