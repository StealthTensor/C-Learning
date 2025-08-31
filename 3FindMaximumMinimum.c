#include <stdio.h>
int main(){
    int min,n,max,array[]={13,26,39,56};
    min=array[0];
    max=array[0];
    n=sizeof(array)/sizeof(array[0]);
    for(int i=0;i<n;i++){
    if(max<array[i]){
        max=array[i];
    }
    if(min>array[i]){
        min=array[i];
    }
    }
    printf("max is %d and min is %d",max,min);

    return 0;

}