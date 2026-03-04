#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);

    int arr[n];

    // Read performance values
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int max = arr[n-1];

    // Last element is always a leader
    printf("%d ", max);

    // Traverse from right to left
    for(i = n-2; i >= 0; i--) {
        if(arr[i] > max) {
            max = arr[i];
            printf("%d ", max);
        }
    }

    return 0;
}
