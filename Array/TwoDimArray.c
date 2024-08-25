#include<stdio.h>

int main(){
    // User detail
    printf("%s%s","NAME :Lakshya\n","REGISTRATION_No :10323210035\n");

    // define the variable
    int i=0;
    int j=0;
    int rows;
    int columns;

    //user input for rows and columns
    printf("%s","Enter the number of rows:");
    scanf("%d",&rows);
    printf("%s","Enter the number of columns:");
    scanf("%d",&columns);

    if(rows<=0 || columns<=0){
        printf("%s","****************ERROR*****************\n");
        printf("%s","The array rows or columns size is not valid it should greater than zero.\n");
        printf("%s","**************************************");
    }
    else{

        // declaration of an array
        int arr[rows][columns];

        for(i=0;i<rows;i++){
            for(j=0;j<columns;j++){
                printf("%s %d %s %d %s","Enter the data at",i,"",j,"index is:");
                scanf("%d",&arr[i][j]);
            }
        }

        printf("%s %s","The element present in an array is:","\n");
        for(i=0;i<rows;i++){
            for(j=0;j<columns;j++){
                printf("%d %s",arr[i][j],"");
            }
            printf("%s","\n");
        }
    }    
    return 0;
}