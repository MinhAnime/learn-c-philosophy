#include <stdio.h>

int main(void) {
  int blanks = 0;
  int tabs = 0;
  int newline = 0;
  int c;
  while ((c = getchar()) != EOF) {
    if (c == ' ')
      ++blanks;
    if (c == '\t')
      ++tabs;
    if (c == '\n')
      ++newline;
  }

  printf("Blanks: %d\n", blanks);
  printf("Tabs: %d\n", tabs);
  printf("Newlines: %d\n", newline);
  return 0;
}
