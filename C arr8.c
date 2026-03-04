#include <stdio.h>

int main()
{
    int n, i, num;
    int evenCount = 0, oddCount = 0;

    // Read the number of days
    scanf("%d", &n);
    // Loop to read each day number
    for(i = 0; i < n; i++)
    {
        scanf("%d", &num);
        // Check if the number is even
        if(num % 2 == 0)
        {
            evenCount++;   // Increment even counter
        }
        else
        {
            oddCount++;    // Increment odd counter
        }
    }
    // Print the result
    printf("Even:%d Odd:%d", evenCount, oddCount);
    return 0;
}
