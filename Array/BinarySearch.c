#include <stdio.h>
void Binary(int arr[],int l,int h,int key);
void main(){
    // define the properties
    int element;
    int arr[] ={1,2,3,4,5}; 
    printf("Enter the element to be seached:");
    scanf("%d",& element);
    Binary(arr,0,4,element);
}

void Binary(int arr[],int l,int h,int key){
    int mid;
    while(l<=h){
        mid = (l+h)/2;
        if(arr[mid] == key){
            printf("Element found");
            return;
        }
        else if(arr[mid]>key){
            h =mid-1;
        }
        else{
            l =mid+1;
        }
    }
    printf("Element not found");

}