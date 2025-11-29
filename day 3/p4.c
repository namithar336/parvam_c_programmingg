//to find a factorial of a number
#include<stdio.h>
int main(){
    int n,fact=1;//initializing the datatypes
    printf("enter a number:");//printing of user function
    scanf("%d",&n);//inputing user data
    for(int i=1;i<=n;i++){//start from 1 and should be less than the user data
        fact*=i;//factorial of the number
    }
    printf("the factorial of the given number is=%d",fact);//final output print statement
        return 0;
}