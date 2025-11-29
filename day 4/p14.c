//program to find address of pointer
#include<stdio.h>
int main(){
    int age=19;
    int*ptr=&age;
    printf("%p\n",&age);
    printf("%u\n",&age);
    return 0;
}