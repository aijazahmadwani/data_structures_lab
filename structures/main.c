#include <stdio.h>
#include <stdlib.h>
struct student
{
    int roll_no;
    char name[30];
    int id;
};
int main()
{
    struct student a;
    printf("Enter roll no. :");
    scanf("%d",&a.roll_no);
    printf("Enter name");
    scanf("%s",&a.name);
    printf("Enter id");
    scanf("%d",&a.id);
    fun(&a);
}
void fun(struct student* a)
{
    printf("%d\n",a->roll_no);
    printf("%s\n",a->name);
    printf("%d",a->id);
}
