//program to find marks and balance
#include<stdio.h>
int main(){
    int marks;
    float balance=50;{
        printf("enter the marks:");
        scanf("%d,%f",&marks);
    }

    int*ptr=&marks;
    printf("%f\n",balance);
    printf("%u\n",ptr);
    printf("%u\n",(&marks));
    return 0;
}