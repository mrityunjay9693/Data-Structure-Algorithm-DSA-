/**
 * @file Frequency.h
 * @author Mrityunjay Kumar (you@domain.com)
 * @brief Frequency of Digit.
 * @version 0.1
 * @date 2024-09-13
 *
 * @copyright Copyright (c) 2024

    Problem: 1. You are given a number "n".
             2. You are given a digit "d"
             3. You are reuquired to calculate the frequency of digit "d" in
 given number "n" Constraints: 0 <= n <= 10^9 0 <= d <= 9

    Input/Output Format:
                Input : n (A number n)
                        d (A digit d whose frequency to be found)
                Output: k (A number denoting d's frequency)
 */

#include <stdio.h>
int frequency();

int frequency() {
  int n;
  int count = 0;
  printf("Enter number n: ");
  scanf("%d", &n);
  printf("Enter d: ");
  int d;
  scanf("%d", &d);
  while (n != 0) {
    int rem = n % 10;
    if (rem == d) {
      count++;
    }
    n = n / 10;
  }
  printf("Frequency of digit %d : %d", d, count);
}

int main() {
  frequency();
  return 0;
}
