#include <stdio.h>
int main(){
    int pre1,pre2,new;
    pre1=0;
    pre2=1;
    printf("%d,%d,",pre1,pre2);
    for(int i=1;i<20;i++){
        new=pre1+pre2;
        printf("%d,",new);
        pre1=pre2;
        pre2=new;

    }
    return 0;

}