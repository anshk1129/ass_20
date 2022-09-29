#include<stdio.h>
#include<string.h>
void cal(char **p,int n);
int main(){
char *v="qwertyuiop";
int n=strlen(v);
cal(&v,n);
return 0;
}
void cal(char **p,int n){
 int cal_vo=0,cal_con=0;
 for(int i=0;i<n;i++){
    if(*(*(p)+i)=='a'||*(*(p)+i)=='A'||*(*(p)+i)=='e'||*(*(p)+i)=='E'||*(*(p)+i)=='i'||*(*(p)+i)=='I'||*(*(p)+i)=='o'||*(*(p)+i)=='O'||*(*(p)+i)=='u'||*(*(p)+i)=='U')
    cal_vo+=1;
    else{
        cal_con+=1;
    }
 }
 printf("%d",cal_vo);
 printf("\n%d",cal_con);
}