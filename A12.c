#include <stdio.h>
#include <math.h>

void main() {
    // The starting and finishing numbers (inclusive)
    int start = 147;
    int finish = 59;

    // The number of characters per column
    int column_width = floor(log10(start));

    for (int i = start; i >= finish; i--) {
        // If the number is an odd number
        if (i % 2 != 0) {
            // Calculate the number of spaces to add before the number
            // Based on the amount of digits the number contains
            int spaces = column_width - floor(log10(i));
            for (int j = 0; j < spaces; j++) {
                // Print a space
                printf(" ");
            }

            // Print the number
            printf("%d ", i);


            int odd_number_count = (start - start%2)/2 + (i - i%2)/2;
            // If we have reached 7 numbers, or the final number
            if (odd_number_count % 7 == 0 || i == finish) {
                // Print a newline
                printf("\n");
            }
        }
    }
}