#include<stdio.h>
struct student
{
    char name[20];
    int age;
    float marks;
};
int main(){
    struct student s;
    printf("enter name of the student:");
    scanf("%s",&s.name);
    printf("enter age of the student:");
    scanf("%d",&s.age);
    printf("enter marks of the student:");
    scanf("%f",&s.marks);
    printf("\nstudent details:\n");
    printf("name=%s\n",s.name);
    printf("age=%d\n",s.age);
    printf("marks=%2f\n",s.marks);
    return 0;
}