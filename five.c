#include<stdio.h>
int max(int *p,int *q);
int main(){
int x=100,y=200;
printf("Maximum is %d",max(&x,&y));
return 0;
}
int max(int *p,int *q){
    if(*p>*q){
        return *p;
    }
    return *q;
}
