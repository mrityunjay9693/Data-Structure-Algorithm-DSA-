/* Write a C program to reverse the elements of an array */
#include <stdio.h>
int main()
{
    int arr[10] = {10, 6, 5, 5, 88, 100, 97, 31, 0, 7};
    int temp;

    for (int i=0,j=9; i<j; i++,j-- ) {
        
        //swapping is done here
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    
    printf("Given array : ");
    printf("[10, 6, 5, 5, 88, 100, 97, 31, 0, 7]");
    printf("\n");
    printf("Reverse of given array : ");

    //for loop for displaying after reverse of array
    printf("[");
    for (int i=0; i<=9; i++) {
       
        printf("%d",arr[i]);
        printf(",");
        
    }
    printf("]");
    
    printf("\n");
    return 0;
}
