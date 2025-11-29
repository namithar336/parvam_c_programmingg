#include<stdio.h>
int main(){
    FILE* fptr;
    fptr=fopen("newfile.txt","w");
    fputs("i am hungry\n",fptr);
    fputs(" at city college",fptr);
    fclose(fptr);
    return 0;
}