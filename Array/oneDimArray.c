#include<stdio.h>

int main(){
    // User detail
    printf("%s%s","NAME :Lakshya\n","REGISTRATION_No :10323210035\n");
    // define the variable
    int i=0;
    int size;

    printf("%s","Enter the size of an array is:");
    scanf("%d",&size);

    if(size<=0){
        printf("%s","****************ERROR****************\n");
        printf("%s","The array size is not valid it should greater than zero.\n");
        printf("******************************************");
    }
    else{
        // declaration of an array
        int arr[size];

        for(i=0;i<size;i++){
            printf("%s %d %s","Enter the data at", i,"index is:");
            scanf("%d",&arr[i]);
        }

        // for loop to print an array
        printf("%s %s","The element present in an array is:","\n");
        for(i=0;i<size;i++){
            printf("%d %s",arr[i],"");
        }
    }
    return 0;
}