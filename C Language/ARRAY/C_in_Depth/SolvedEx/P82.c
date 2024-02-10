/* Program to add elements in array */
#include <stdio.h>
int main(){

    int arr[10], sum=0;

    for(int i=0; i<10; i++){

        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum of elements of array is : %d\n ",sum);
    return 0;
}