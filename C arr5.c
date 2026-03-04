#include <stdio.h>

int main() {
    int N, i, num;
    int expectedSum = 0, actualSum = 0;

    // Read the value of N (total roll numbers)
    scanf("%d", &N);

    // Calculate expected sum of roll numbers from 1 to N
    expectedSum = N * (N + 1) / 2;

    // Read N-1 roll numbers and calculate their sum
    for(i = 1; i < N; i++) {
        scanf("%d", &num);
        actualSum += num;
    }

    // The missing roll number is the difference
    printf("Missing roll number: %d\n", expectedSum - actualSum);

    return 0;  // End of program
}
