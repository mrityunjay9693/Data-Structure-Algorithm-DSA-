/*
 @mrityunjay9693
 
 Q1: Write a program to input 10 numbers into an array and find sum of all numbers in it.
 
 */

#include <stdio.h>
int main(){
    int arr[10];
    int sum = 0;

    printf("Enter 10 elements in array arr: ");
    printf("\n");

    for (int i=0; i<10; i++) {
        
        scanf("%d",&arr[i]);
        sum = sum + arr[i];   
    }
    
    printf("%d",sum);
    printf("\n");
    
    return 0;
}
