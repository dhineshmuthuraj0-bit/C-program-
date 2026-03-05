#include <stdio.h>

int main() {
    int n, i, count = 0;
    float sum = 0, avg;
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    avg = sum / n;
    for(i = 0; i < n; i++)
        if(arr[i] > avg)
            count++;
    printf("%d", count);
    return 0;
}
