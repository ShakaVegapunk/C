#include <stdio.h>

int main() {
  int celsius, fehr;
  printf("Convert Celsius to Fahrenheit\n Enter a number:\n");
  scanf("%d", &celsius);

  fehr = (celsius * 9 / 5) + 32;

  printf("-------------------------------------\n");
  printf("Celsius to Fahrenheit Conversion Table\n");
  printf("-------------------------------------\n");
  printf("%d°C is %d°F\n", celsius, fehr);
}

// Task:
// Write a program to print the corresponding Celsius to Fahrenheit table.

// The program asks the user to enter a number in Celsius and converts it to
// Fahrenheit. scanf() is used to read the input from the user and memory
// address of the variable celsius is passed to store the value entered by the
// user.
