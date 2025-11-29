#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("namitha.txt","r");

    char content[1000];
    if(fptr!=NULL){
        while(fgets(content,1000,fptr)){
            printf("%s",content);
        }
    }
        else{
        printf("file open unsuccessful");
    }
    
    return 0;
}
