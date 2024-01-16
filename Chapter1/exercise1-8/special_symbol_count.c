#include <stdio.h>

int main() {
  int c, count;
  count = 0;

  printf("Enter some text and press Ctrl+D (Ctrl+Z on Windows) to simulate EOF:\n");
  while ((c = getchar()) != EOF) {
    if (c == '\n' || c == '\t' || c == ' ') {
      ++count;
    }
  }

  printf("\n-------------------------------------\n");
  printf("Number of blanks, tabs and newlines: %d\n", count);
  printf("-------------------------------------\n");

  return 0;
}
