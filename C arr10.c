#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int max = -1;
    for(i = n-1; i >= 0; i--) {
        int temp = arr[i];
        arr[i] = max;
        if(temp > max)
            max = temp;
    }
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
