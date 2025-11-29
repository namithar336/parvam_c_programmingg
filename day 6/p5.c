#include<stdio.h>
#define size 5
int stack[size];
int top=-1;
void push(int value){
    if(top==size-1){
        printf("stack pverflow!\n");
        return;
    }
}
top++;
stack[top]=value;

int pop(){
    if(top==-1){
        printf("stack underflow!\n");
        return -1;
    }
int value=stack[top];
top--;
return value;
}
int peek(){
    if(top==-1){
        printf("stack is empty!\n");
        return -1;
    }
    return stack[top];
}
void display(){
    if(top==-1){
        printf("stack is empty!|n");
        return;
    }
    {
    printf("stack elements:");}
    for(int i=0;i<=top;i++){
        printf("%d",stack[i]);
    }
    printf("\n");
}
int main(){
    push(10);
    push (50);
    push(100);
    display();
    printf("popped:%d\n",pop());
    printf("top element:%d\n",peek());
    display();
    return 0;
}