#include<stdio.h>
int main(){
    FILE* fptr;
    fptr=fopen("newfile.txt","w");
    fputs("c programming in cec\n",fptr);
    fputs("city engineering college",fptr);
    fclose(fptr);
    return 0;
}