#include<stdio.h>
#include<string.h>
int main(){
char *p="ramesh";
int n=strlen(p);
for(int i=n-1;i>=0;i--){
    printf("%c",*(p+i));
}
return 0;
}