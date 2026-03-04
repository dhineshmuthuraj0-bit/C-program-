#include <stdio.h>

int main() {
    int n, i, maxLen = 1, curr = 1;
    scanf("%d", &n);
    int arr[n];

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(i = 1; i < n; i++) {
        if(arr[i] > arr[i-1]) {
            curr++;
            if(curr > maxLen)
                maxLen = curr;
        } else {
            curr = 1;
        }
    }

    printf("%d", maxLen);

    return 0;
}
