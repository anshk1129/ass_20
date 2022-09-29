#include<stdio.h>
int main(){
int arr[]={10,20,30,40,50,60,70};
for(int i=6;i>=0;i--){
printf("%d ",*(arr+i));
}
return 0;
}