#include <stdio.h>

int main() {
    int N, i, j;
    
    // Read number of customer IDs
    scanf("%d", &N);
    
    int arr[N];  // Array to store customer IDs
    
    // Read customer IDs
    for(i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Loop through each element
    for(i = 0; i < N; i++) {
        
        int isDuplicate = 0;  // Flag to check if element appeared before
        
        // Check previous elements
        for(j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
                isDuplicate = 1;  // Mark as duplicate
                break;
            }
        }
        
        // If not duplicate, print the element
        if(isDuplicate == 0) {
            printf("%d ", arr[i]);
        }
    }
    
    return 0;
}
