//program to find simple interest
#include<stdio.h>
    float
    simpleinterest(float p,float r,float t)
    {
        return(p*r*t)/100;

    }
    int main()
    {
        float p,r,t;
        printf("enter p,r,t:");
        scanf("%f%f%f",&p,&r,&t);
        printf("simpleinterest=%.2f\n",simpleinterest(p,r,t));
        return 0;
    }
 
    


 