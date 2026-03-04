#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);

    int arr[n];

    // Read stock prices
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int max = -1;

    // Traverse from right and replace with future maximum
    for(i = n-1; i >= 0; i--) {
        int temp = arr[i];
        arr[i] = max;

        if(temp > max)
            max = temp;
    }

    // Print modified array
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
