#include <stdio.h>
#include <string.h>

// Function to count occurrences of N in M
int count_occurrences(int n, long long m) {
    char str_n[3], str_m[8];

    // Convert N and M to strings
    sprintf(str_n, "%d", n);
    sprintf(str_m, "%lld", m);

    int count = 0;
    char *pos = str_m;

    // Find occurrences of N in M
    while ((pos = strstr(pos, str_n)) != NULL) {
        count++;
        pos++; // Move pointer to continue search
    }

    return count;
}

int main() {
    int n;
    long long m;

    // Read the inputs N and M
    while(scanf("%d %lld", &n, &m) != EOF) {
		printf("%d\n", count_occurrences(n, m));
		// Calculate and print the result
	};

    
    
    return 0;
}
