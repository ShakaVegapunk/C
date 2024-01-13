/*
Verify that the expression getchar() != EOF is 0 or 1.
*/

#include <stdio.h>

int main()
{
    int c;

    printf("Enter a character or press Ctrl+D (Ctrl+Z on Windows) to simulate EOF:\n");

    // getchar() returns an integer (character code) or EOF
    int result = (getchar() != EOF);

    printf("\nResult: %d\n", result);

    return 0;
}

/*
Output:

If you enter a character, the output is 1. If you enter EOF, the output is 0.

example:

Type a character: a // and press enter

Result: 1

Type a character: // No character and press Ctrl+D (Ctrl+Z on Windows)

Result: 0
 */
