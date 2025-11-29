#include<stdio.h>
int main(){
    int num,rev=0,digit;//initialize of data types
    printf("Enter the number:");//print statement for inputing
    scanf("%d",&num);//user input
    int original=num;//initializing the data type
    for(;num!=0;num=num/10){//number should not be equal to 0
        digit=num%10;//it takes the last digit
        rev=rev*10+digit;//reversing of the digits
    }
    printf("original number=%d\n",original);// print statement to print original number
    printf("reversed number=%d\n",rev);//print statement to print reversed numbers
    return 0;
    }


