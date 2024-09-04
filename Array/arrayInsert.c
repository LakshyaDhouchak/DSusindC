#include <stdio.h>
int main(){
    // define the properties
    int size =0;
    int index;
    int element =0;

    int arr[50];
    for(int i=0;i<5;i++){
        printf("Enter the data:");
        scanf("%d",&arr[i]);
        size++;
    }
    
    printf("The element present in array Is:\n");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("%s","\n");

    printf("Enter the index to be inserted:\n");
    scanf("%d",&index);
    if(index<size){

        printf("Enter the element to inserted:\n");
        scanf("%d",&element);

        for(int i=size;i>=index;i--){
            arr[i+1] = arr[i];
        }
        arr[index] = element;
        size++;
    
        printf("The element present after insertion is:\n");
        for(int i=0;i<size;i++){
            printf("%d ",arr[i]);
        }
    }
    else{
        printf("index out of range so can't insert");
    }    
    return 0;



}