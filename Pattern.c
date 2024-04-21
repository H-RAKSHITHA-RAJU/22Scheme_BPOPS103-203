#include <stdio.h>

int main() {
    int rows, i, j, k, space;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        // Print spaces
        for (space = 1; space <= rows - i; space++)
            printf(" ");

        // Print first half of the pattern
        for (j = 1; j <= i; j++)
            printf("%d", j);

        // Print second half of the pattern
        for (k = i - 1; k >= 1; k--)
            printf("%d", k);

        printf("\n");
    }

    // Print the separator line
    for (i = 1; i <= rows * 2 - 1; i++)
        printf("-");

    printf("\n");

    return 0;
}
/*
Display pattern up to the 3rd row
Input:
Enter the number of rows: 3
Output:
   1
  121
 12321
  */
