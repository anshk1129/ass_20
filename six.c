#include<stdio.h>
int main(){
char *p="ramesh";
int i;
cal(&p);
for( i=0;p[i];i++);
printf("Length of string is %d",i);
return 0;
}
void cal(char **q){
    int i;
    for( i=0;*(*(q)+i);i++);
    printf("%d\n",i);

}