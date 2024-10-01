/**
 * @file InverseOfAnArray.c
 * @author Mrityunjay Kumar (you@domain.com)
 * @brief k
 * @version 0.1
 * @date 2024-10-01
 *
 * @copyright Copyright (c) 2024
Problem: Inverse of an Array
         1.You are given 'a' number n, representing the size of an array 'arr'.
         2.You are given 'n' numbers, representing the elements of an array
'arr'. 3.You are required to calculate the inverse of array 'arr'.

Constraints: 0 <= n <= 10^7
             The only difference is the range of values is frm 0 to n-1, instead
of 1 to n

Sample inputs: 5 (n, size of array)
               4
               0
               2
               3
               1

Sample Output: 1
               4
               2
               3
               0
 */

#include <stdio.h>

int main() {
  int n;
  int pos;
  // array size:
  printf("Enter n(size of array): ");
  scanf("%d", &n);

  int arr[n];

  // input in arr:
  printf("Enter values in array arr: ");
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  printf("arr: ");
  for (int i = 0; i < n; i++) {
    printf("%d", arr[i]);
  }
  // Calculating inverse of arr
  for (int i = 0; i < n; i++) {
    pos = arr[i]; //i=4, pos=1
    printf("i: %d", i);
    printf("\n");
    printf("pos: %d", pos);
    printf("\n");
    arr[pos] = i; // arr[1] = i(4)
  }
  // display inverse ; [1 , 4, 2, 3, 0]
  printf("Inverse of arr: ");
  for (int i = 0; i < n; i++) {
    printf("%d", arr[i]);
  }
  printf("\n");
  return 0;
}
