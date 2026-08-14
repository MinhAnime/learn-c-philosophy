#include <stdio.h>

int main(void) {
  /* copy input to output; 1st version*/
  int c;
  c = getchar();
  while (c = getchar() != EOF ) {
    putchar(c);
  }
  return 0;
}
