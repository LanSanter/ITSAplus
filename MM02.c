#include <stdio.h>

// Function to determine if a year is a leap year
int is_leap_year(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Function to calculate the day of the week
// 1 = Sunday, 2 = Monday, ..., 7 = Saturday
int calculate_day_of_week(int year, int month, int day) {
    // Adjust for Zeller's Congruence
    if (month < 3) {
        month += 12;
        year--;
    }

    int k = year % 100;
    int j = year / 100;

    int day_of_week = (day + (13 * (month + 1)) / 5 + k + (k / 4) + (j / 4) - (2 * j)) % 7;

    // Convert to 1 = Sunday, ..., 7 = Saturday
    if (day_of_week < 0)
        day_of_week += 7;

    return (day_of_week + 6) % 7 + 1;
}

int main() {
    int test_cases;

    // Read number of test cases
    scanf("%d", &test_cases);

    for (int i = 0; i < test_cases; i++) {
        int year, month, day;

        // Read the date input
        scanf("%d %d %d", &year, &month, &day);

        // Calculate the day of the week
        int day_of_week = calculate_day_of_week(year, month, day);

        // Print the result
        printf("%d\n", day_of_week);
    }

    return 0;
}
