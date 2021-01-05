#include<stdio.h>
#include "isort.h"
#include <math.h>

void shift_element(int* arr,int i){
    for(int n=i;n>0;n--){
        *(arr+n)=*(arr+(n-1));
    }
    
}
void insertion_sort(int* arr, int len){
    int data =0;
    int i=0;
for(int j=1 ; j<len ; j++){
    data=*(arr+j);
    i=j-1;
    while(i>=0 && *(arr+i)>data){
        shift_element((arr+i),1);
        *(arr+i)=data;
        i--;
    } 
}
 }
