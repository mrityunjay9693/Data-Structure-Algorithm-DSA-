/*
 @mrityunjay9693
 Problem13.2: Let us write a program to copy the content of a 5 elements
              of a  integer array into another array in reverse order.
 */
#include <stdio.h>
int main() {
  int arr[5];
  int rev_arr[5];

  printf("Enter 5 elements in an array: ");
  printf("\n");
  for (int i = 0; i < 5; i++) {
    scanf("%d", &arr[i]);
  }


  // following for loop copy the content of array arr[5]
  // into rev_arr[5] in reverse order.
  for (int i = 4, j = 0; i >= 0; i--, j++) {
    rev_arr[j] = arr[i];
  }

  printf("Elements in reverse order: \n");
  for (int i = 0; i < 5; i++) {
    printf("%d",rev_arr[i]);
    printf("\n");
  }
  return 0;
}

