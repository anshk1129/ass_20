#include<stdio.h>
void swap(int *,int *);
int main(){
int a=10,b=20;
printf("Value before swap a=%d and b=%d",a,b);
swap(&a,&b);
printf("\nValue after swap a=%d and b=%d",a,b);
return 0;
}
void swap(int *p,int *q){
    int tmp;
    tmp=*p;
    *p=*q;
    *q=tmp;
}