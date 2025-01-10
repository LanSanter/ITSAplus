#include <stdio.h>

// Function to check if a number is perfect
const char* is_perfect_number(long long p) {
    if (p <= 1) {
        return "nonperfect";
    }

    long long sum = 1; // 1 is a proper divisor of all numbers > 1
    for (long long i = 2; i * i <= p; i++) {
        if (p % i == 0) {
            sum += i;
            if (i != p / i) {
                sum += p / i;
            }
        }
    }

    if (sum == p) {
        return "perfect";
    } else {
        return "nonperfect";
    }
}

int main() {
    int test_cases;

    // Read number of test cases
    scanf("%d", &test_cases);

    for (int i = 0; i < test_cases; i++) {
        long long p;

        // Read the number to check
        scanf("%lld", &p);

        // Determine if the number is perfect
        printf("%s\n", is_perfect_number(p));
    }

    return 0;
}
