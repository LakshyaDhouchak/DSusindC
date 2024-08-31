#include<stdio.h>

int main(){
    // User detail
    printf("%s%s","NAME :Lakshya\n","REGISTRATION_No :10323210035\n");

    int size;
    int i;
    int sum=0;
    printf("Enter the size of an array:");
    scanf("%d",&size);
    int arr[size];
    for(i=0;i<size;i++){
        printf("Enter the data:");
        scanf("%d",& arr[i]);
    }
    for(i=0;i<size;i++){
        if(arr[i]%3 ==0){
            sum= sum+arr[i];
        }
        
    }
    printf("%d",sum);
    return 0;
}