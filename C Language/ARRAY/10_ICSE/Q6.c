/**

 *@mrityunjay9693
 *Q6: Write a program to input 10 numbers into an integer array and check
      whether all numbers in the array are same or not.
 */
#include <stdbool.h>
#include <stdio.h>
int main() {

  int arr[5];
  bool f = true;

  printf("Enetr 10 elements in the array:\n");
  for (int i = 0; i < 5; i++) {
    scanf("%d", &arr[i]);
  }
  // int t = arr[0];
  for (int i = 0; i < 5; i++) {
    if (arr[i] != arr[0]) {
      f = false;
      break;
    } 
  }
  //printf("%d\n", true);
  if (f) {
    printf("All numbers are same.");
  } else {
    printf("Not same.");
  }
}