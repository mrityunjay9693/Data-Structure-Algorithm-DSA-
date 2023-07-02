/* Write a program in C to find the largest and smallest number in the given array */
#include <stdio.h>

int main()
{
    int arr[10] = {10, 6, 5, 5, 88, 100, 97, 31, 0, 7};
    
    //in variable largest and smallest arr[0] is stored and considered as small and big number.
    int largest = arr[0];
    int smallest = arr[0];

    for(int i=0; i<10; i++){

        if(arr[i] > largest){

            largest = arr[i];
        
        }
        if(arr[i] < smallest){

            smallest = arr[i];

        }

    }

    printf("Largest number: %d \n",largest);
    printf("Smallest number: %d \n",smallest);


    return 0;
}