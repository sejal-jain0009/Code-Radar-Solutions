#include <stdio.h>

int main() {
    int n;


    scanf("%d", &n);

    int arr[n], freq[n];
    
    // Initialize frequency array with -1
    for(int i = 0; i < n; i++) {
        freq[i] = -1;
    }

    // Input elements
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Count frequencies
    for(int i = 0; i < n; i++) {
        int count = 1;
        if(freq[i] == -1) {
            for(int j = i + 1; j < n; j++) {
                if(arr[i] == arr[j]) {
                    count++;
                    freq[j] = 0;  // Mark as counted
                }
            }
            freq[i] = count;
        }
    }

    // Print frequencies
    
    for(int i = 0; i < n; i++) {
        if(freq[i] != 0) {
            printf("%d %d\n", arr[i], freq[i]);
        }
    }

    return 0;
}
