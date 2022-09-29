#include<stdio.h>
int sum(int *arr,int n);
int main(){
int arr[10]={10,20,30,40,50,60,70,80,90,100};
int n=10;
printf("%d is the sum",sum(arr,10));
return 0;
}
int sum(int *arr,int n){
int am=0;
for(int i=0;i<n;i++){
am=am+i[arr];
}
return am;
}