/*
 @mrityunjay9693
 Q8.6: Write a program in C to take a decimal number and convert to binary
 number.
 */

#include <stdio.h>
int main() {
  
  int i,j;
  int num;
  int arr[15];

  printf("Enter a decimal number: ");
  scanf("%d", &num);
  i = 0; // after each i++ in while loop, i updated to i= 1,2,3,4,5
  
  while (num != 0) {

    arr[i] = num % 2;
    num = num / 2;
    i++;
  }

  printf("Binary of %d is: ", num);
  for (j = i - 1; j >= 0; j--) {
    printf("%d",arr[j]);
  }

  printf("\n");
  return 0;
}