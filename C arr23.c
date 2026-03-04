#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, closest;
    scanf("%d", &n);
    int arr[n];

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    closest = arr[0];

    for(i = 1; i < n; i++) {
        if(abs(arr[i]) < abs(closest) || 
          (abs(arr[i]) == abs(closest) && arr[i] > closest))
            closest = arr[i];
    }

    printf("%d", closest);

    return 0;
}
