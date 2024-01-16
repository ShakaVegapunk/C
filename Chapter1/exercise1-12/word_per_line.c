// Taks:
// Write a program that prints its input one word per line

#include <stdio.h>

int main() {

  char c, state;

  printf("\nEnter Text and press Enter to put every word in a new line\n");
  printf("You can continue until you Press Ctrl + D (Ctrl + Z on Windows) to "
         "exit\n");
  printf("---------------------------------------------------------\n");
  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t') {
      putchar('\n');
    }
    putchar(c);
  }

  printf("\n---------------------------------------------------------\n");
  printf("Thank you for using the program\n");
  return 0;
}
