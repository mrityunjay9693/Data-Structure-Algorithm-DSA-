/*
 @mrityunjay9693

 Problem1: Find given element in an array.
           You are required to check if, d(a number) exsists in given array "arr" and 
           what index(0 based index). 
           If found, print the "index",
           Otherwise, return/print "-1" 
*/
#include <stdio.h>
int main()
{
    int n;
    int d;  // d is an integer value given by user whose index has to find

    //for size of array
    printf("Enter array size: ");
    scanf("%d",&n);
    int arr[n];

    //input in arr array
    printf("Enter values in the array: ");
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter the value(d) which has to find: ");
    scanf("%d",&d);

    //finding the d.
    for(int i = 0; i < n; i++){
        if(arr[i] == d){
            printf("%d",i); //value(d) found and returning the index.
        }
    }
    //return -1;
    return 0;

}
