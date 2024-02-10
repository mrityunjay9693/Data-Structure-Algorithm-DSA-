/**

 *@mrityunjay9693
 *Q5: Write a program to input 10 numbers into an integer array and
      check whether all all numbers are 3-digits or not.
 */
#include <stdio.h>
int main() {

  int arr[10];
  int count = 0;

  printf("Enter 10 integer numbers in the array:\n");
  
  for (int i = 0; i < 10; i++) {
    
    scanf("%d", &arr[i]);
  
  }

  for (int i = 0; i < 10; i++) {
    
    if (arr[i] > 99 && arr[i] < 1000) {
     
      count++;
    
    }
  
  }
  if (count == 10) {

    printf("All the numbers in the array are 3-digits numbers.\n");
  
  } else {
    
    printf("Invalid inputs.\n");
  
  }

  return 0;
}
