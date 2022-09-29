#include<stdio.h>
void swap(char **,char **);
int main(){
char *a="ansh";
char *b="khandelwal";
swap(&a,&b);
printf("%s %s",a,b);
return 0;
}
void swap(char **p,char **q){
    char *tmp;
    tmp=*p;
    *p=*q;
    *q=tmp;
}