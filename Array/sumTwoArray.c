#include<stdio.h>
int main(){
     // User detail
    printf("%s%s","NAME :Lakshya\n","REGISTRATION_No :10323210035\n");

    // define the properties
    int rows;
    int columns;
    int i;
    int j;
    int sum =0;
    printf("Enter the number of rows:\n");
    scanf("%d",&rows);
    printf("Enter the number of columns:\n");
    scanf("%d",&columns);

    int arr[rows][columns];

    for(i=0;i<rows;i++){
        for(j =0;j<columns;j++){
            printf("Enter the data:");
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<rows;i++){
        for(j =0;j<columns;j++){
            sum =sum+arr[i][j];
        }
    }

    printf("%d",sum);

}