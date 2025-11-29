// access array elements 
#include<stdio.h>
int main(){
    int arr[5]={25,35,45,55,65};
    int *p= arr;
    for(int i=0;i<5;i++){
    printf("%d\n",*(p+i));
}
    return 0;
}