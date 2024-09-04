#include<stdio.h>
 int main(){
    // define the properties
    int element=0;
    int flag =0;

    int arr[5] = {1,2,3,4,5};
    printf("Enter the element to be search:");
    scanf("%d",& element);
    for(int i=0;i<5;i++){
        if(arr[i] == element){
            flag =1;
            break;
        }
    }
    if(flag ==0){
        printf("THe element is not present");
    }
    else{
        printf("The element is present ");
    }
    return 0;
 }