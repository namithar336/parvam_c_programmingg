#include<stdio.h>
int main(){
    int temp;
    scanf("%d",&temp);
if(temp>40){
    printf("very hot\n");
}
else if(temp>30){
    printf("hot\n");
}
else if(temp>20){
    printf("warm\n");
}
else {
    printf("cold\n");
}
return 0;
}