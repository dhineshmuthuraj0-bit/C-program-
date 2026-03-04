#include <stdio.h>

int main()
{
    int N, K, i;

    // Read number of elements
    scanf("%d", &N);

    int arr[N];

    // Read array elements
    for(i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Read value of K
    scanf("%d", &K);

    // Print rotated array (Left rotation by K)
    for(i = K; i < N; i++)
    {
        printf("%d ", arr[i]);   // Print elements from K to N-1
    }

    for(i = 0; i < K; i++)
    {
        printf("%d ", arr[i]);   // Print first K elements at the end
    }

    return 0;
}
