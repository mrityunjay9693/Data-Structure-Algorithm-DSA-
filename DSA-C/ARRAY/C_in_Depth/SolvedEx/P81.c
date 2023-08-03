/* Program to input values into an array and display them */

#include <stdio.h>
int main(){

    int arr[10];
    printf("Please enter values into the array: ");
    
    //input value in array
    for(int i=0 ; i<10; i++){

        scanf("%d", &arr[i]);
        //printf("\t");
    }
    
    printf("Values of the array: \n");

    //displaying Values of array
    for(int i=0; i<10; i++){
        
        printf("%d",arr[i]);
        printf("\t");
        printf("\n");
    }
    return 0;
}