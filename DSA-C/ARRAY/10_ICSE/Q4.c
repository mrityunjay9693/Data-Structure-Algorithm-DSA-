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
    scanf("%d",&arr[i]); //user input
    
  }
  
  
  for (int i = 0; i < 10; i++) {  // considered array element 
    int fact = 0;
    if( arr[i]==1)
        continue;
   // printf("fact: %d",fact);
    for (int j = 2; j*j<=arr[i]; j++) {  // calculate prime
      
      if (arr[i] % j == 0) {  
        fact++; 
        break;       
      }
    }
   
    if(fact==0){
        sum = sum + arr[i];
    }
 }

  printf("Sum of Prime numbers: %d", sum);
  
  return 0;
}
