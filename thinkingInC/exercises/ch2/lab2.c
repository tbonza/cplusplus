/* lab2.c: Rounds to the nearest integer */
#include <stdio.h>

int main()
{
  int num1 = 5;
  float num2 = 1.4;
  int result;
  float resulta;

  result = num2/num1;
  printf("int: %d\n", result);
  resulta = num2 / 5.0f;
  printf("float: %d\n", resulta);
  
  return 0;
}
