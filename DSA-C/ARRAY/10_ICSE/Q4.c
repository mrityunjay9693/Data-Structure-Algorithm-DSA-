/**

 *@mrityunjay9693
 *Q4: Write a program to input 10 numbers into an integer array and
      find the sum of prime numbers only.

 */
#include <stdio.h>
int main() {

  int arr[10];
  int sum = 0;
  //int n = 0;
  printf("Enter 10 elements in the array:\n");

  for (int i = 0; i < 10; i++) {
    scanf("%d",&arr[i]);
    
  }
  
  
  for (int i = 0; i < 10; i++) {
    int fact = 1;
   // printf("fact: %d",fact);
    for (int j = 2; j*j< arr[i]; j++) {

      if (arr[i] % j == 0) {
        fact++; 
        //break;       
      }
    }
    printf("fact=%d",fact);
    if(fact==1){
        sum = sum + arr[i];
    }
 }

  printf("Sum of Prime numbers: %d", sum);
  
  return 0;
}
