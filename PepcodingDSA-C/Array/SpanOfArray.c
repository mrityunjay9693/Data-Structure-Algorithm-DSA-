/**
 * @file SpanOfArray.c
 * @author Mrityunjay Kumar (mkaykumar123@gmai.com)
 * @brief 1.You are given a number 'n', representing the count of elements.
          2.You are given 'n' numbers.
          3.You are required to find the span of inputs.
 * Span of array is defined as difference of maximum value and minimum value.

 * Input Format : n (any number)
                  n1( elelments of array)
                  n2
                  n3
                  ..
                  n
 * Outut Format: span_value ( maximum_value - minimum_value)
 * Constrairs: 1 <= n <= 10^4
               0 <= n1, n2, n3... n element <= 10^9
 * Sample Input: 6
                 15
                 30
                 40
                 4
                 11
                 9
 * Sample Output: 3 ( 40 - 4 )
 * @version 0.1
 * @date 2024-09-29
 *
 * @copyright Copyright (c) 2024
 *
 */

#include <stdio.h>

int main() {
  int n;
  // n : number of elements to be inserted inside the array
  printf("Please enter value of n: ");
  scanf("%d", &n);

  // array
  int array[n];
  // array input:
  for (int i = 0; i < n; i++) {
    scanf("%d", &array[i]);
  }

  int max_value = array[0]; //greatest element
  int min_value = array[0]; //samllest element

  for(int i=0; i < n; i++){ // [15, 30, 40, 4, 11, 9]
    if(array[i] > max_value){
        max_value = array[i];
    }
    if(array[i] < min_value){
        min_value = array[i];
    }
  }
  int spanOfArray = max_value-min_value;
  printf("Span of array: %d",spanOfArray);
}