#include <stdio.h>
void sort(int n , int arr[]){
    int i , j , temp ;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }
        }
    }


}
void printarray(int n,int arr[]){
    int i;
    for(int i=0;i<n;i++){
       printf("%d\t",arr[i]);
    }
}

int main(){
    int arr1[]={5,500,20,56,72,39};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int arr2[]={67,45,298,100,99};
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    int n=n1+n2;
    int arr[20];
    for(int i=0;i<n1;i++){
       arr[i]=arr1[i];
    }
    for(int i=0;i<n2;i++){
       arr[i+n1]=arr2[i];
    }
    sort(n,arr);
    printf("First array: ");
    printarray(n1,arr1);
    printf("\nSecond array: ");
    printarray(n2,arr2);
    printf("\nFinal array: ");
    printarray(n,arr);
}
