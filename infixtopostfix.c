#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MAX 50
int precedence(char op){
    if(op=='+'||op=='-'){
        return 1;
    }
    else if(op=='*'||op=='/'){
        return 2;
    }
    else if(op=='^'){
        return 3;
    }
    else{
        return -1;
    }
}
void intopost(char infix[],char postfix[]){
    char stack[MAX];
    int top=-1;
    int j=0;
    for(int i=0;infix[i]!='\0';i++){
        if(isalnum(infix[i])){
            postfix[j++]=infix[i];
        }
        else if(infix[i]=='('){
            stack[++top]=infix[i];
        }
        else if(infix[i]==')'){
            while(top!=-1 && stack[top]!='('){
                postfix[j++]=stack[top--];
            }
            top--;
        }
        else{
            while(top!=-1 && precedence(stack[top])>=precedence(infix[i])){
                postfix[j++]=stack[top--];
            }
            stack[++top]=infix[i];
        }
    }
    while(top!=-1){
        postfix[j++]=stack[top--];
    }
    postfix[j]='\0';
}
void main(){
    char infix[MAX],postfix[MAX];
    gets(infix);
    intopost(infix,postfix);
    puts(postfix);
}