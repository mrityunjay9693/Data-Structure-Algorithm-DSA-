/*
 @mrityunjay9693

 Q2: Write a program to input 10 numbers into an integer array and
     find sum of even numbers and sum of odd numbers separately.

 */

#include <stdio.h>
int main()
{
    int arr[10];
    int evenSum = 0;
    int oddSum = 0;

    printf("Enetr 10 elements in array arr:\n");
    for (int i = 0; i < 10; i++ ) {
        
        scanf("%d",&arr[i]);
        
        if(arr[i] % 2 == 0){
            evenSum = evenSum + arr[i];
        }
        else{
            oddSum = oddSum + arr[i];
        }
    }

    printf("Sum of all even numbers of array arr: %d \n",evenSum);
    printf("Sum of all odd numbers of array arr: %d \n",oddSum);

    return 0;
}


