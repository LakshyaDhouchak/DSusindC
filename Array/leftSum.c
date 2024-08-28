#include<stdio.h>

int main(){
    // define the properties
    int rows;
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
        }
        printf("%s","\n");
    }

    return 0;
}