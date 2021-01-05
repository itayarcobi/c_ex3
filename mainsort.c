#include<stdio.h>
#include "isort.h"
#define MAXLEN 50
int main(){
 int arr[MAXLEN];
 int i=0;
 int num=0;
    printf("please enter 50 numbers\n");
    for(i=0;i<MAXLEN;i++){
if(scanf("%d",&num)!=1){
        printf("Failed to read the number\n");
        break;
}
else
{
    *(arr+i)=num;
}
 }
insertion_sort(arr,MAXLEN);
 int j=0;
 for(j=0;j<MAXLEN;j++)
printf("%d,",arr[j]);
printf("\n");
return 0;
}
