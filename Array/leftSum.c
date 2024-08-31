#include<stdio.h>

int main(){
    // User detail
    printf("%s%s","NAME :Lakshya\n","REGISTRATION_No :10323210035\n");

    // define the properties
    int rows;
    int sum =0;
    int i;
    int j;

    printf("Enter the number of rows:\n");
    scanf("%d",&rows);

    int arr[rows][rows];

    for(i=0;i<rows;i++){
        for(j =0;j<=i;j++){
            printf("Enter the data:");
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<rows;i++){
        for(j =0;j<=i;j++){
            printf("%d ",arr[i][j]);
            sum = sum+arr[i][j];
        }
        printf("%s","\n");
    }
    printf("The sum of left side triangle is:%d",sum);

    return 0;
}