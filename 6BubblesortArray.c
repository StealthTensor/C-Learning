#include <stdio.h>
int main(){
    int array[]={13,13,39,56};
    int n=sizeof(array)/sizeof(array[0]);
    int temp;
    for(int i=0; i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(array[j]>array[j+1]){
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
                
            }
        }
       
    }
    
    for(int i=0;i<n;i++){
        printf("%d\t",array[i]);
    }

    return 0;

}