//swapping of two numbers using pointers ---[call by reference]
#include<stdio.h>
void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
int main(){
    int a=20,b=15;
    swap(&a,&b);
    printf("a=%d,b=%d",a,b);
    return 0;
}