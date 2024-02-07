/**
 * @file SearchElementInArray.c
 * @author Mrityunjay Kumar (mkaykumar123@@gmail.com)
 * @brief Given an integer array and another integer element. The task is to
 find if the given element is present in array or not.
 * @version 0.1
 * @date 2024-02-07
 * @link
 https://www.geeksforgeeks.org/problems/search-an-element-in-an-array-1587115621/0
 * @copyright Copyright (c) 2024
 */

#include <stdio.h>

int main() {

  int size;
  printf("Enter size of array: ");
  scanf("%d", &size);

  int arr[size];
  printf("Enter Elements/Values in the array: ");
  for (int i = 0; i < size; i++) {
    scanf("%d", &arr[i]);
  }

  int X;
  printf("Enter element/value to be search: ");
  scanf("%d", &X);

  for (int i = 0; i < size; i++) {
    if (arr[i] == X) {
      printf("The element/value %d is at index/position %d", arr[i], i);
    }
  }
  return 0;
}