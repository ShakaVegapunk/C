// Task:
// Write a program to copy its input to its output, replacing each tab by \t, each
//backspace by \b, and each backslash by \\. This makes tabs and backspaces visible in an
//unambiguous way

#include <stdio.h>
#include <termios.h>
#include <unistd.h>

int main()
{
        int c;

        printf("Replace tabs, backspaces and backslashes with escape sequences while typing text\n");
        printf("Press Enter to stop:\n");

        // Save the current terminal settings
        struct termios oldt, newt;
        tcgetattr(STDIN_FILENO, &oldt);
        newt = oldt;

        // Disable canonical mode (input is processed character by character, not line by line)
        // Disable echoing (characters are not printed to the screen as they are typed)
        newt.c_lflag &= ~(ICANON | ECHO);

        // Apply the new terminal settings
        tcsetattr(STDIN_FILENO, TCSANOW, &newt);

        while ((c = getchar()) != EOF && (c != '\n'))
        {
            switch (c)
            {
            case '\t':
                printf("\\t");
                break;
            case 127:  // ASCII value for backspace
                printf("\\b");
                break;
            case '\\':
                printf("\\\\");
                break;
            default:
                putchar(c);
            }
        }

        printf("\nThank you for trying it out!\n");

        tcsetattr(STDIN_FILENO, TCSANOW, &oldt); 

        return 0;
}

// A bit overkill, but it works on Linux and Windows exrtermely well.
// The program uses the termios.h header file to disable canonical mode and echoing.
