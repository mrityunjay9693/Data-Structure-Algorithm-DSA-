/**

 *@mrityunjay9693
 *Q3: Write a program to input 10 numbers into an integer array and
     print those numbers which are less than its average.

 */

#include <stdio.h>
int main() 
{
  int arr[10];
  int sum = 0;
  float avg;

  printf("Eneter 10 numbers in the given array:\n");

  for (int i = 0; i <= 9; i++) {

    scanf("%d",&arr[i]);
    sum = sum + arr[i];
  }

  avg = (float)sum / 10;
  
  printf("Elements of array less than average:\n");
  
  for (int i = 0; i <= 9; i++) {
    
    if(arr[i] < avg){
      printf("%d",arr[i]);
      printf("\n");
    }
  
  }
  return 0;
}