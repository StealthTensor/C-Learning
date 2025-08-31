#include <stdio.h>
int main(){
    int x=0,array[]={13,26,39,56};
    for(int i=0; i<4;i++){
       x=x+array[i];
    }
    printf("%d",x);
    return 0;

}