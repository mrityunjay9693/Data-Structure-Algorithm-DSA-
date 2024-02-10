/**
 * @file InverseNumber.c
 * @author Mrityunjay Kumar (mkaykumar123@gmai.com)
 * @brief 1.You are given a number following certain constraints.
  The key constraints is : if the number is 5-digit is long, it'll contain all
the digit from 1 to 5 without missing any and without repeating any e.g: 23415
is a 5-digit long number containing all digits from 1 to 5, without missing and
repeating any digits from 1 to 5. Take a look at few other valid numbers-
624135, 81456273 etc. Here are a few invalid numbers - 139, 7421357 etc. The
inverse of a number is defined as the number created by interchanging the face
value and index of digits of numbers. For example: 426135(reading from right to
left, 5 is in place 1, 3 is in place 2, 1 is in place 3, 6 is in place 4, 2 is
in place 5 and 4 is in place 6), the inverse will be 416253(reading from right
to left, 3 is in place 1, 5 is in place 2, 2 is in place 3, 6 is in place 4, 1
is in place 5 and 4 is in place 6) More example- inverse of 2134 is 1243 and
  inverse of 24153 is 24153.
2.Take "num" as number input, assume that the number will follow constraints.
3.Prints it's inverse.
Constrairs
1 <= n < 10^8, and following other constraints defined above.
4.Format
  Input : num, Where n is any integer which following constrints defined above.
  Output : "i", the inverted number.
5.Sample Input
  n : 28346751
  Sample Output
  i : 73425681(inverse of n)
 * @version 0.1
 * @date 2024-02-10
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <math.h>
#include <stdio.h>
int main() {
  printf("Eneter input number to inverse : ");
  int num;
  scanf("%d", &num);

  int temp = num;
  int pos = 1;
  int inverse = 0;

  while (temp != 0) {
    int digit = temp % 10;
    double i = pos * pow(10, (digit - 1));
    inverse += i;
    temp = temp / 10;
    pos++;
  }
  printf("Inverse of %d : %d\n ",num,inverse);
  return 0;
}