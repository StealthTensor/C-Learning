#include <stdio.h>
int main(){
    int arr[]={15,46,2,11,48,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i,j,min,temp;
    printf("Original array: ");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n\n");
    for(i=0;i<n-1;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
        printf("Pass %d: ", i + 1);
        for(int k=0; k<n; k++) {
            printf("%d ", arr[k]);
        }
        printf("\n\n");
    }
    printf("Sorted array: ");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;

}