#include <stdio.h>

int main() {
  char c = 'c';
  char some_string[] = "\c";
  printf(%s, some_string);
  return 0;
}

/*
this is the exercise:
experiment to find out what happens when printf's argument string contains \c,
where c is some character not listed above:

this is the output:

In function ‘main’:
warning: unknown escape sequence: '\c'
     printf("\c\n");
              ^
 **/
