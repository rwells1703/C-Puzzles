#include <stdio.h>
#include <math.h>

void main() {
    // The maximum number to go up to (inclusive)
    int N = 53;

    // The number of characters per column (extra 1 for the space between columns)
    int column_width = floor(log10(N)) + 1;

    for (int i = 1; i <= N; i++) {
        // If the number is an odd number
        if (i % 2 != 0) {
            // Print the number
            printf("%d", i);
            
            // Calculate the number of spaces to add after the number
            // Based on the amount of digits the number contains
            int spaces = column_width - floor(log10(i));
            for (int j = 0; j < spaces; j++) {
                // Print a space
                printf(" ");
            }

            // If we have reached 5 numbers, or the final number
            if ((i + 1) % 10 == 0 || i == N) {
                // Print a newline
                printf("\n");
            }
        }
    }
}