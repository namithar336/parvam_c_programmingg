#include<stdio.h>
struct date
{
    int d,m,y;
};
struct student
{
    char name[20];
    struct date dob ;
};
int main()
{
    struct student s;
    printf("enter name:");
    scanf("%s", s.name);
    
    printf("enter dob(dd mm yyyy):");
    scanf("%d %d %d",&s.dob.d,&s.dob.m,&s.dob.y);
    
    printf("\ndetails:\n");
    printf("name:%s\ndob:%d-%d-%d",s.name,s.dob.d,s.dob.m,s.dob.y);
    return 0;
}


