//pointer to function
#include<stdio.h>
void change(int *x){
    *x=6000;
}
int main(){
    int a=50;
    change(&a);
    printf("a=%d",a);
    return 0;
}