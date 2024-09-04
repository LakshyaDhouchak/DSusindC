#include<stdio.h>

int main(){
    // define the properties
    int index;
    int size =5;

    int arr[size];

    for(int i=0;i<size;i++){
        printf("Enter the element:");
        scanf("%d",&arr[i]);
    }

    printf("Enter the index:");
    scanf("%d",&index);

    if(index>=5){
        printf("Index out of range");
    }
    else{

        for(int i=index;i<5;i++){
            arr[i] =arr[i+1];
        }
        size--;

        printf("The element present in an array is:");
        for(int i=0;i<size;i++){
            printf("%d",arr[i]);
        }
    }    

    return 0;
}