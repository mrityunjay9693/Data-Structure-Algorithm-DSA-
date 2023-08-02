/*
 @mrityunjay9693
 Problem13.1: Let us write program that interchnages elements at odd position
              with even positin in an array of 10 elements .
 */

#include <stdio.h>
int main() {

  int arr[] = {13, 4, 5, 1, 5, 7, 8, 45, 67, 9};
  int temp;

  // Displaying array.
  for (int i = 0; i < 10; i++) {
    printf("%d\t", arr[i]);
  }
  printf("\n");

  // for loop for swapping
  for (int i = 0; i < 9; i=i+2) {
    temp = arr[i];
    arr[i] = arr[i + 1];
    arr[i + 1] = temp;
  }
  // Displaying array after interchanging adjacent elements.
  for (int i = 0; i < 10; i++) {
    printf("%d\t", arr[i]);
  }
  return 0;
}

