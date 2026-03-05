#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    int arr[n];
    int total = 0, left = 0;
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        total += arr[i];
    }
    for(i = 0; i < n; i++) {
        total -= arr[i]; 
        if(left == total) {
            printf("%d", i);
            return 0;
        }
        left += arr[i];
    }
    printf("-1");
    return 0;
}
