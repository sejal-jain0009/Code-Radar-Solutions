// Your code here...
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    
    // Read array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize frequency array
    int freq[100001] = {0}; // Assuming input values are within 0 to 100000

    // Count frequencies
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    // Find element with max frequency (and smallest in case of tie)
    int maxFreq = 0, result = 100001;
    for (int i = 0; i < 100001; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            result = i;
        } else if (freq[i] == maxFreq && i < result) {
            result = i;
        }
    }

    printf("%d\n", result);
    return 0;
}