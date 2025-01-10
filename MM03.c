#include <stdio.h>
#include <string.h>

// Function to find the length of the recurring cycle
int recurring_cycle_length(int numerator, int denominator) {
    int remainders[1000];
    memset(remainders, -1, sizeof(remainders));

    int value = numerator % denominator;
    int position = 0;

    while (value != 0 && remainders[value] == -1) {
        remainders[value] = position;
        value = (value * 10) % denominator;
        position++;
    }

    if (value == 0) {
        return 0; // No recurring cycle
    }

    return position - remainders[value];
}

int main() {
    int test_cases;

    // Read number of test cases
    scanf("%d", &test_cases);

    for (int i = 0; i < test_cases; i++) {
        int n1, d1, n2, d2;

        // Read the two fractions
        scanf("%d %d %d %d", &n1, &d1, &n2, &d2);

        // Calculate the lengths of recurring cycles
        int len1 = recurring_cycle_length(n1, d1);
        int len2 = recurring_cycle_length(n2, d2);

        // Determine the winner
        if (len1 > len2) {
            printf("A\n");
        } else if (len2 > len1) {
            printf("B\n");
        } else {
            printf("T\n");
        }
    }

    return 0;
}
