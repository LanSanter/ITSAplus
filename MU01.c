#include <stdio.h>

// Function to find the minimum steps to reduce N to 1
int min_steps_to_one(long long n) {
    int steps = 0;

    while (n > 1) {
        if (n % 2 == 0) {
            // If even, divide by 2
            n /= 2;
        } else {
            // If odd, choose the optimal operation
            if (n == 3 || ((n - 1) / 2) % 2 == 0) {
                n--;
            } else {
                n++;
            }
        }
        steps++;
    }

    return steps;
}

int main() {
    int test_cases;

    // Read number of test cases
    scanf("%d", &test_cases);
    printf("1\n");
    for (int i = 0; i < test_cases; i++) {
        long long n;

        // Read the number to reduce to 1
        scanf("%lld", &n);

        // Calculate the minimum steps and print the result
        printf("%d\n", min_steps_to_one(n));
    }

    return 0;
}
