
#include "tbutils.h"
#include <stdio.h>

#define BUF_N 1024

int main() {

  char buffer[BUF_N];
  printf("Please enter your name here: ");
  TBUtils::getASCII_KbInput(buffer, BUF_N);
  printf("Hello, %s\n", buffer);

  printf("Please enter your long name here again: ");
  TBUtils::getASCII_KbInput(buffer, 3);
  printf("Hello, %s\n", buffer);

  return 0;
}
