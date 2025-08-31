#include <stdio.h>
#include <limits.h>

int findsecondlargest(int arr[],int n){
    int largest=INT_MIN;
    int secondlargest=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            secondlargest=largest;
            largest=arr[i];
        }
        else if (arr[i] > secondlargest && arr[i] != largest) {
        secondlargest=arr[i];
        }
    }
    return (secondlargest);
}
void printarray(int arr[], int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int arr[]={5,67,2,56,108,99};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("The array is: ");
    printarray(arr,n);
    printf("\n\n");
    int bruh=findsecondlargest(arr,n);

    if(bruh!=INT_MIN){
        printf("The second largest number is %d",bruh);
    }
    else{
        printf("coudnt find the second largest number");
    }

}