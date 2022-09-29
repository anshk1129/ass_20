#include<stdio.h>
int main(){
int x=5,*p,**q,***r;
p=&x;
q=&p;
r=&q;
printf("%d %d %d %d\n",&x,&p,&q,&r);
printf("%d %d %d %d ",*&q,*p,***r);

return 0;
}