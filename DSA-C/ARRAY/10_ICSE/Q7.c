/**

 *@mrityunjay9693
 *Q7: Write a program to input 5 numbers into an integer array and check
      whether all numbers in the ascending order or not.
 */
#include <stdbool.h>
#include <stdio.h>

int main() {

  int arr[5];
  bool f = false;

  printf("Enter 5 elements in the array: ");
  for (int i = 0; i < 5; i++) {
    scanf("%d", &arr[i]);
  }

  for (int i = 0; i < 4; i++) {
    if (arr[i] < arr[i + 1]) {
      f = true;

    } else {
      f = false;
    }
  }

  if (f) {
    printf("Array in ascending order");
  } else {
    printf("Array not in ascending order");
  }

  return 0;
}
