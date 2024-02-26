#include <stdio.h>
#include <string.h>

#define MAX_WORD_LENGTH 100
#define MAX_WORDS 100

int wordLengths[MAX_WORDS] = {0};
int maxLength = 0;

void get_word();
void write_word();

int main() {
  printf("Enter words, then EOF (Ctrl+D or Ctrl+Z) to finish:\n");
  get_word();
  printf("\n");

  printf("\nHistogram of Word Lengths:\n");
  write_word();
  return 0;
}

void get_word() {
  char word[MAX_WORD_LENGTH];
  int length;

  while (scanf("%99s", word) == 1) {
    length = strlen(word);
    if (length > 0 && length < MAX_WORDS) {
      wordLengths[length]++;
      if (length > maxLength) {
        maxLength = length;
      }
    }
  }
}

void write_word() {
  for (int i = 1; i <= maxLength; i++) {
    if (wordLengths[i] > 0) {
      for (int j = 0; j < i; j++) {
        printf("*");
      }
      printf("\n");
    }
  }
}
