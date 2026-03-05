#include <stdio.h>

int main() {
    int N, i, num;
    int expectedSum = 0, actualSum = 0;
    scanf("%d", &N);
    expectedSum = N * (N + 1) / 2;
    for(i = 1; i < N; i++) {
        scanf("%d", &num);
        actualSum += num;
    }
    printf("Missing roll number: %d\n", expectedSum - actualSum);
    return 0;
}
