//
#include<stdio.h>
int main(){
    int arr[10]={11,12,13,14,15,16,17,18,19,20};
    int *p=arr;
    int sum=0;
    for(int i=0;i<10;i++){
        sum+=*(p+i);
    }
    printf("sum=%d\n",sum);
    return 0;
    }