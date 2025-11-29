//to find largest of numbers
#include<stdio.h>
int main(){
    int a[5]={10,60,90,100,1000};
    int max=a[0];
    for(int i=1;i<5;i++)
    if(a[i]>max)
     max=a[i];
     printf("maximum=%d",max);
     return 0;
}