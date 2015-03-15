#include "tbutils.h"
#include <stdio.h>

void TBUtils::getASCII_KbInput(char *s, int N)
{
  if (N <= 0) return;

  int i = 0;
  char c;

  while (true) {
    c = getc(stdin);
    if ((c == '\n') || (i >= (N - 1)) ) {
      s[i] = '\0';
      break;
    }
    s[i] = c;
    i++;
  }

}
