#include <stdio.h>
int main(){
    int count=0,array[]={13,13,39,56};
    int n=sizeof(array)/sizeof(array[0]);
    for(int i=0; i<n;i++){
        for(int j=i+1;j<n;j++){
            if(array[j]==array[i]){
                count++;
                array[j]=-1;
            }
        }
       
    }
    printf("there are %d duplicates",count);
    return 0;

}