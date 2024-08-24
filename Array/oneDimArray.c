#include<stdio.h>

int main(){
    // define the variable
    int i=0;
    int size;

    printf("%s","Enter the size of an array is:");
    scanf("%d",&size);
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

    return 0;
}