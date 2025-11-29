// program to find sum of digits using for loops
#include<stdio.h>
int main(){
    int n,sum=0;
    printf("enter the numbers:");
    scanf("%d",&n);//user input
    for(;n>0;n/=10){
        sum+=n%10;
    }
printf("the sum of the digits is=%d",sum);
return 0;
}
      