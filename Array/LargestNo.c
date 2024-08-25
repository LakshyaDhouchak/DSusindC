#include<stdio.h>

int main(){
    // User detail
    printf("%s%s","NAME :Lakshya\n","REGISTRATION_No :10323210035\n");

    // define the variable
    int i=0;
    int j=0;
    int max;

    // declaration of an array
    int arr[2][2];

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%s %d %s %d %s","Enter the data at",i,"",j,"index is:");
            scanf("%d",&arr[i][j]);
        }
    }
    max =arr[0][0];

    printf("%s %s","The element present in an array is:","\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d %s",arr[i][j],"");
        }
        printf("%s","\n");
    }

    // finding the largest number
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            if(max<arr[i][j]){
                max = arr[i][j];
            }
        }
    }

    printf("%s %d","The largest number present in an array is: ",max);

    return 0;
}