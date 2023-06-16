#include <stdio.h>

void printPattern(int n) {
    for (int i = n; i >= 1; i--) {
        // Print numbers from 1 to i
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // Print spaces
        int numSpaces = 2 * (n - i);
        for (int k = 1; k <= numSpaces; k++) {
            printf(" ");
        }

        // Print numbers from i to 1
        for (int j = i; j >= 1; j--) {
            printf("%d", j);
        }

        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    printPattern(n);

    return 0;
}
