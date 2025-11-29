//to find whether it is a leap year or not
#include<stdio.h>
int main(){
    int year;
    printf("enter the year:");
    scanf("%d",&year);
    if((year%400==0)||(year%4==0&&year%100!=0)){
        printf("it is leap year=%d",year);
    }
    else
    {
        printf("it is not a leap year=%d",year);}
    
    return 0;
}   
