#include <stdio.h>
#include <string.h>
struct stud //����һ���ṹ��
{
    int age;
    char *name;
    int score;
};
void  out(struct stud *s) //����һ��ָ��ṹ���ָ��
{
    printf("age=%d\n",s->age);//ȡ����ʼ���ṹ���ֵ
    printf("name=%s\n",s->name);//ʹ��ָ��ýṹ��ָ��,���ʽṹ�ĳ�Ա������ʹ�� -> �����
    printf("score=%d\n",s->score);
}

int main()
{
    struct stud std= //��ʼ���ṹ��stud ����std
    {                //���� std������Ϊ stud
        .age = 18,
        .name = "yang",
        .score = 99,
    };
    out(&std); //ͨ���� std �ĵ�ַ����� std ��Ϣ

}
