//change the values using pointers
#include<stdio.h>
int main(){
    int a=25;
    int *p=&a;
    *p=99;
    printf("a=%d",a);
    return 0;
}